#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// ─── Display List ───────────────────────────────────────────────────────────
void display(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ─── Insert at Beginning ────────────────────────────────────────────────────
struct Node* insertAtBeginning(struct Node* head, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

// ─── Insert at End ──────────────────────────────────────────────────────────
struct Node* insertAtEnd(struct Node* head, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// ─── Insert at Specific Position ────────────────────────────────────────────
struct Node* insertAtPosition(struct Node* head, int value, int position)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// ─── Main ────────────────────────────────────────────────────────────────────
int main()
{
    struct Node* head = NULL;

    // Insert at End
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    printf("After Insert at End:       ");
    display(head);

    // Insert at Beginning
    head = insertAtBeginning(head, 5);
    printf("After Insert at Beginning: ");
    display(head);

    // Insert at Position
    head = insertAtPosition(head, 15, 3);
    printf("After Insert at Position 3: ");
    display(head);

    return 0;
}