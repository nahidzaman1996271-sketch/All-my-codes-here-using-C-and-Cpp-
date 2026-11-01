#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 256

typedef struct Node {
    char ch;
    int freq;
    int order;
    struct Node *left, *right;
} Node;

static int counter = 0;

Node *newNode(char ch, int freq, Node *left, Node *right) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->order = counter++;
    n->ch = ch;
    n->freq = freq;
    n->left = left;
    n->right = right;
    return n;
}

/* Find index of the node with the smallest frequency in the list */
int findMin(Node *list[], int size) {
    int min = 0;
    for (int i = 1; i < size; i++)
        if (list[i]->freq < list[min]->freq ||
           (list[i]->freq == list[min]->freq && list[i]->order < list[min]->order))
            min = i;
    return min;
}

/* Walk the tree; left edge = 0, right edge = 1 */
void generateCodes(Node *root, char *path, int depth, char codes[][MAX_CHARS]) {
    if (!root) return;

    if (!root->left && !root->right) {      /* leaf node */
        path[depth] = '\0';
        strcpy(codes[(unsigned char)root->ch], path);
        return;
    }
    path[depth] = '0';
    generateCodes(root->left, path, depth + 1, codes);
    path[depth] = '1';
    generateCodes(root->right, path, depth + 1, codes);
}

int main() {
    char text[1000];
    int freq[MAX_CHARS] = {0};

    printf("Enter a string: ");
    if (!fgets(text, sizeof(text), stdin)) return 1;
    text[strcspn(text, "\n")] = '\0';       /* remove the newline */

    if (text[0] == '\0') {
        printf("Empty input.\n");
        return 1;
    }
    printf("\n");

    /* 1. Count frequencies */
    for (int i = 0; text[i]; i++)
        freq[(unsigned char)text[i]]++;

    /* 2. Create a leaf node for every character that appears */
    Node *list[MAX_CHARS];
    int size = 0;
    for (int i = 0; i < MAX_CHARS; i++)
        if (freq[i] > 0)
            list[size++] = newNode((char)i, freq[i], NULL, NULL);

    printf("Frequencies:\n");
    for (int i = 0; i < size; i++)
        printf("  %c : %d\n", list[i]->ch, list[i]->freq);

    /* 3. Repeatedly merge the two smallest nodes */
    while (size > 1) {
        int a = findMin(list, size);
        Node *first = list[a];
        list[a] = list[--size];             /* remove it from the list */

        int b = findMin(list, size);
        Node *second = list[b];
        list[b] = list[--size];

        list[size++] = newNode('\0', first->freq + second->freq, first, second);
    }
    Node *root = list[0];

    /* 4. Generate codes */
    static char codes[MAX_CHARS][MAX_CHARS];
    char path[MAX_CHARS];
    if (!root->left && !root->right)        /* only one distinct character */
        strcpy(codes[(unsigned char)root->ch], "0");
    else
        generateCodes(root, path, 0, codes);

    printf("\nHuffman Codes:\n");
    int totalBits = 0;
    for (int i = 0; i < MAX_CHARS; i++) {
        if (freq[i] > 0) {
            printf("  %c : %-5s (freq %d)\n", (char)i, codes[i], freq[i]);
            totalBits += freq[i] * (int)strlen(codes[i]);
        }
    }

    /* 5. Encode the message */
    printf("\nOriginal : %s\n", text);
    printf("Encoded  : ");
    for (int i = 0; text[i]; i++)
        printf("%s", codes[(unsigned char)text[i]]);
    printf("\n");

    printf("\nTotal bits (Huffman)    : %d\n", totalBits);
    printf("Total bits (ASCII, 8-bit): %d\n", (int)strlen(text) * 8);

    return 0;
}