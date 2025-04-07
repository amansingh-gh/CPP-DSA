#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Define the size of the queue

// Structure for queue
struct Queue {
    int front, rear;
    int arr[SIZE];
};

// Initialize the queue
void initialize(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is empty
int isEmpty(struct Queue* q) {
    return (q->front == -1 || q->front > q->rear);
}

// Check if queue is full
int isFull(struct Queue* q) {
    return (q->rear == SIZE - 1);
}

// Enqueue operation
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if (q->front == -1) q->front = 0;
    q->arr[++q->rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Dequeue operation
void dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d dequeued from queue\n", q->arr[q->front]);
    q->front++;
}

// Peek operation
int peek(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return q->arr[q->front];
}

// Display queue elements
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    struct Queue q;
    initialize(&q);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    
    dequeue(&q);
    display(&q);
    
    printf("Front element: %d\n", peek(&q));

    return 0;
}
