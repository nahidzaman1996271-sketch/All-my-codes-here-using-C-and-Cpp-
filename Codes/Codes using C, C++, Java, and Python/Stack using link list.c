#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// ─── Push (Insert at Top) ────────────────────────────────────────────────────
struct Node* push(struct Node* top, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    return top;
}

// ─── Pop (Remove from Top) ───────────────────────────────────────────────────
struct Node* pop(struct Node* top)
{
    if (top == NULL)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return top;
    }
    struct Node* temp = top;
    printf("Popped: %d\n", top->data);
    top = top->next;
    free(temp);
    return top;
}

// ─── Peek (See Top Element) ──────────────────────────────────────────────────
void peek(struct Node* top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}

// ─── Display Stack ───────────────────────────────────────────────────────────
void display(struct Node* top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack (top to bottom): ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ─── Main ────────────────────────────────────────────────────────────────────
int main()
{
    struct Node* top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    display(top);

    peek(top);

    top = pop(top);
    display(top);

    top = pop(top);
    display(top);

    return 0;
}