#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;


void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue Overflow! Queue is full.\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}


void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;
}


void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
}


void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (front to rear): ");
    for (int i = front; i <= rear; i++)
    {
        if (i == rear)
            printf("%d\n", queue[i]);
        else
            printf("%d -> ", queue[i]);
    }
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