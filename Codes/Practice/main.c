#include <stdio.h>
#include <string.h>
#define MAX 100
 
char stack[MAX];
int top = -1;
 
void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
 
int main() {
    char str[MAX], reversed[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
 
    int len = strlen(str);
    for (int i = 0; i < len; i++) push(str[i]);
    for (int i = 0; i < len; i++) reversed[i] = pop();
    reversed[len] = '\0';
 
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", reversed);
 
    return 0;
}