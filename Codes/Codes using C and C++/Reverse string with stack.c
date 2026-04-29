#include <stdio.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

// ─── Push ────────────────────────────────────────────────────────────────────
void push(char ch)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = ch;
}

// ─── Pop ─────────────────────────────────────────────────────────────────────
char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return '\0';
    }
    char ch = stack[top];
    top--;
    return ch;
}

// ─── Main ────────────────────────────────────────────────────────────────────
int main()
{
    char str[SIZE];

    printf("Enter a string: ");
    scanf("%s", str);

    // Push every character into stack
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    // Pop every character to get reversed string
    printf("Reversed string: ");
    while (top != -1)
    {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}