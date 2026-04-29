#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

// ─── Push ────────────────────────────────────────────────────────────────────
void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow! Stack is full.\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("Pushed: %d\n", value);
}

// ─── Pop ─────────────────────────────────────────────────────────────────────
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    printf("Popped: %d\n", stack[top]);
    top--;
}

// ─── Peek ────────────────────────────────────────────────────────────────────
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

// ─── Display ─────────────────────────────────────────────────────────────────
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d -> ", stack[i]);
    }
    printf("NULL\n");
}

// ─── Main ────────────────────────────────────────────────────────────────────
int main()
{
    push(10);
    push(20);
    push(30);
    display();

    peek();

    pop();
    display();

    pop();
    display();

    return 0;
}