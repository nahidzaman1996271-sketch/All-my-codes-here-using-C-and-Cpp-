/*
    ============================================================
     MEDICAL STORE MANAGEMENT SYSTEM  (Complex Engineering Problem 12)
     Language : C
     Storage  : File Handling (binary file -> medicines.dat)
                (binary file -> transactions.dat)

     Modules:
        1. Admin Panel   -> Add / View / Update / Delete / Search medicine
        2. Customer Panel-> Browse / Search / Add to Cart / Checkout (with tax)
    ============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MED_FILE   "medicines.dat"
#define TXN_FILE   "transactions.dat"
#define TAX_RATE   0.05      /* 5% tax */
#define MAX_CART   50

/* ---------------------- Data Structures ---------------------- */

typedef struct {
    int   id;
    char  name[50];
    char  category[30];
    float price;
    int   quantity;
} Medicine;

typedef struct {
    int   id;
    char  name[50];
    float price;
    int   qty;
} CartItem;

/* In-memory cart for the customer session */
CartItem cart[MAX_CART];
int cartCount = 0;

/* ---------------------- Utility Functions ---------------------- */

void pause_screen() {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');
    getchar();
}

int getNextID() {
    FILE *fp = fopen(MED_FILE, "rb");
    Medicine m;
    int maxId = 0;
    if (fp == NULL) return 1;
    while (fread(&m, sizeof(Medicine), 1, fp) == 1) {
        if (m.id > maxId) maxId = m.id;
    }
    fclose(fp);
    return maxId + 1;
}

/* Find a medicine by ID. If found, fills *m and returns byte offset in file. Returns -1 if not found */
long findMedicineByID(int id, Medicine *m) {
    FILE *fp = fopen(MED_FILE, "rb");
    long pos = 0;
    if (fp == NULL) return -1;

    while (fread(m, sizeof(Medicine), 1, fp) == 1) {
        if (m->id == id) {
            fclose(fp);
            return pos;
        }
        pos += sizeof(Medicine);
    }
    fclose(fp);
    return -1;
}

/* ==================== ADMIN CRUD OPERATIONS ==================== */

/* CREATE */
void addMedicine() {
    Medicine m;
    FILE *fp = fopen(MED_FILE, "ab");   /* append binary */
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    m.id = getNextID();
    printf("\n--- Add New Medicine (ID: %d) ---\n", m.id);

    printf("Medicine Name   : ");
    scanf(" %49[^\n]", m.name);
    printf("Category        : ");
    scanf(" %29[^\n]", m.category);
    printf("Price           : ");
    scanf("%f", &m.price);
    printf("Quantity        : ");
    scanf("%d", &m.quantity);

    fwrite(&m, sizeof(Medicine), 1, fp);
    fclose(fp);

    printf("\nMedicine added successfully!\n");
}

/* READ (all records) */
void viewMedicines() {
    Medicine m;
    FILE *fp = fopen(MED_FILE, "rb");
    int found = 0;

    if (fp == NULL) {
        printf("\nNo records found. (File does not exist yet)\n");
        return;
    }

    printf("\n%-5s %-20s %-15s %-10s %-10s\n", "ID", "Name", "Category", "Price", "Quantity");
    printf("--------------------------------------------------------------\n");

    while (fread(&m, sizeof(Medicine), 1, fp) == 1) {
        printf("%-5d %-20s %-15s %-10.2f %-10d\n", m.id, m.name, m.category, m.price, m.quantity);
        found = 1;
    }
    fclose(fp);

    if (!found) printf("No medicines available in the store.\n");
}

/* UPDATE */
void updateMedicine() {
    Medicine m;
    int id;
    long pos;

    printf("\nEnter Medicine ID to update: ");
    scanf("%d", &id);

    pos = findMedicineByID(id, &m);
    if (pos == -1) {
        printf("Medicine with ID %d not found.\n", id);
        return;
    }

    printf("Current details -> Name: %s | Category: %s | Price: %.2f | Qty: %d\n",
           m.name, m.category, m.price, m.quantity);

    printf("Enter new Name       : ");
    scanf(" %49[^\n]", m.name);
    printf("Enter new Category   : ");
    scanf(" %29[^\n]", m.category);
    printf("Enter new Price      : ");
    scanf("%f", &m.price);
    printf("Enter new Quantity   : ");
    scanf("%d", &m.quantity);

    FILE *fp = fopen(MED_FILE, "r+b");   /* read+write binary, does not truncate */
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fseek(fp, pos, SEEK_SET);
    fwrite(&m, sizeof(Medicine), 1, fp);
    fclose(fp);

    printf("Medicine updated successfully!\n");
}

/* DELETE */
void deleteMedicine() {
    int id;
    Medicine m;
    int deleted = 0;

    printf("\nEnter Medicine ID to delete: ");
    scanf("%d", &id);

    FILE *fp = fopen(MED_FILE, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fread(&m, sizeof(Medicine), 1, fp) == 1) {
        if (m.id == id) {
            deleted = 1;      /* skip writing this record -> effectively deletes it */
            continue;
        }
        fwrite(&m, sizeof(Medicine), 1, temp);
    }
    fclose(fp);
    fclose(temp);

    remove(MED_FILE);
    rename("temp.dat", MED_FILE);

    if (deleted)
        printf("Medicine ID %d deleted successfully.\n", id);
    else
        printf("Medicine ID %d not found.\n", id);
}

/* SEARCH */
void searchMedicine() {
    int choice;
    Medicine m;

    printf("\nSearch by:\n1. ID\n2. Name\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int id;
        printf("Enter ID: ");
        scanf("%d", &id);
        if (findMedicineByID(id, &m) != -1)
            printf("Found -> ID:%d Name:%s Category:%s Price:%.2f Qty:%d\n",
                   m.id, m.name, m.category, m.price, m.quantity);
        else
            printf("Medicine not found.\n");
    } else {
        char name[50];
        int found = 0;
        printf("Enter Name (or part of it): ");
        scanf(" %49[^\n]", name);

        FILE *fp = fopen(MED_FILE, "rb");
        if (fp == NULL) { printf("No records found.\n"); return; }

        while (fread(&m, sizeof(Medicine), 1, fp) == 1) {
            if (strstr(m.name, name) != NULL) {
                printf("Found -> ID:%d Name:%s Category:%s Price:%.2f Qty:%d\n",
                       m.id, m.name, m.category, m.price, m.quantity);
                found = 1;
            }
        }
        fclose(fp);
        if (!found) printf("No matching medicine found.\n");
    }
}

/* ==================== ADMIN MENU ==================== */

void adminMenu() {
    int choice;
    do {
        printf("\n===== ADMIN PANEL =====\n");
        printf("1. Add Medicine\n");
        printf("2. View All Medicines\n");
        printf("3. Update Medicine\n");
        printf("4. Delete Medicine\n");
        printf("5. Search Medicine\n");
        printf("6. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addMedicine(); break;
            case 2: viewMedicines(); break;
            case 3: updateMedicine(); break;
            case 4: deleteMedicine(); break;
            case 5: searchMedicine(); break;
            case 6: printf("Returning to main menu...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 6);
}

/* ==================== CUSTOMER OPERATIONS ==================== */

void addToCart() {
    int id, qty;
    Medicine m;

    printf("\nEnter Medicine ID to add to cart: ");
    scanf("%d", &id);

    if (findMedicineByID(id, &m) == -1) {
        printf("Medicine not found.\n");
        return;
    }

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    if (qty > m.quantity) {
        printf("Insufficient stock! Only %d available.\n", m.quantity);
        return;
    }

    if (cartCount >= MAX_CART) {
        printf("Cart is full.\n");
        return;
    }

    cart[cartCount].id    = m.id;
    strcpy(cart[cartCount].name, m.name);
    cart[cartCount].price = m.price;
    cart[cartCount].qty   = qty;
    cartCount++;

    printf("%s (x%d) added to cart.\n", m.name, qty);
}

void viewCart() {
    float subtotal = 0;
    if (cartCount == 0) {
        printf("\nYour cart is empty.\n");
        return;
    }

    printf("\n%-5s %-20s %-10s %-5s %-10s\n", "ID", "Name", "Price", "Qty", "Subtotal");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < cartCount; i++) {
        float line = cart[i].price * cart[i].qty;
        subtotal += line;
        printf("%-5d %-20s %-10.2f %-5d %-10.2f\n",
               cart[i].id, cart[i].name, cart[i].price, cart[i].qty, line);
    }
    printf("---------------------------------------------------\n");
    printf("Subtotal: %.2f | Tax (%.0f%%): %.2f | Total: %.2f\n",
           subtotal, TAX_RATE * 100, subtotal * TAX_RATE, subtotal * (1 + TAX_RATE));
}

/* Deducts purchased quantity from medicines.dat */
void updateStockAfterPurchase(int id, int qtyBought) {
    Medicine m;
    long pos = findMedicineByID(id, &m);
    if (pos == -1) return;

    m.quantity -= qtyBought;

    FILE *fp = fopen(MED_FILE, "r+b");
    if (fp == NULL) return;
    fseek(fp, pos, SEEK_SET);
    fwrite(&m, sizeof(Medicine), 1, fp);
    fclose(fp);
}

void logTransaction(float total) {
    FILE *fp = fopen(TXN_FILE, "ab");
    if (fp == NULL) return;
    fwrite(&total, sizeof(float), 1, fp);
    fclose(fp);
}

void checkout() {
    float subtotal = 0, total;

    if (cartCount == 0) {
        printf("\nCart is empty. Nothing to checkout.\n");
        return;
    }

    printf("\n========== INVOICE ==========\n");
    printf("%-5s %-20s %-10s %-5s %-10s\n", "ID", "Name", "Price", "Qty", "Subtotal");
    for (int i = 0; i < cartCount; i++) {
        float line = cart[i].price * cart[i].qty;
        subtotal += line;
        printf("%-5d %-20s %-10.2f %-5d %-10.2f\n",
               cart[i].id, cart[i].name, cart[i].price, cart[i].qty, line);
    }

    total = subtotal * (1 + TAX_RATE);
    printf("------------------------------\n");
    printf("Subtotal : %.2f\n", subtotal);
    printf("Tax (%.0f%%): %.2f\n", TAX_RATE * 100, subtotal * TAX_RATE);
    printf("TOTAL    : %.2f\n", total);
    printf("==============================\n");

    /* Update stock levels for each purchased medicine */
    for (int i = 0; i < cartCount; i++) {
        updateStockAfterPurchase(cart[i].id, cart[i].qty);
    }

    logTransaction(total);

    printf("\nPayment successful! Thank you for your purchase.\n");
    cartCount = 0;   /* clear cart */
}

/* ==================== CUSTOMER MENU ==================== */

void customerMenu() {
    int choice;
    do {
        printf("\n===== CUSTOMER PANEL =====\n");
        printf("1. View Available Medicines\n");
        printf("2. Search Medicine\n");
        printf("3. Add to Cart\n");
        printf("4. View Cart\n");
        printf("5. Checkout\n");
        printf("6. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: viewMedicines(); break;
            case 2: searchMedicine(); break;
            case 3: addToCart(); break;
            case 4: viewCart(); break;
            case 5: checkout(); break;
            case 6: printf("Returning to main menu...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 6);
}

/* ==================== MAIN MENU ==================== */

int main() {
    int choice;

    printf("=====================================================\n");
    printf("      MEDICAL STORE MANAGEMENT SYSTEM (C Language)\n");
    printf("=====================================================\n");

    do {
        printf("\n1. Admin Panel\n");
        printf("2. Customer Panel\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: adminMenu(); break;
            case 2: customerMenu(); break;
            case 3: printf("\nExiting... Thank you!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
