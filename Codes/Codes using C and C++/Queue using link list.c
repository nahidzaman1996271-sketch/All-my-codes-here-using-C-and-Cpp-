#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear  = NULL;

void enqueue(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = newNode;
        rear  = newNode;
        printf("Enqueued: %d\n", value);
        return;
    }
    rear->next = newNode;
    rear       = newNode;
    printf("Enqueued: %d\n", value);
}


void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued: %d\n", front->data);
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
}


void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", front->data);
}


void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue (front to rear): ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    peek();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}