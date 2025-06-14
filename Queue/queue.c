#include<stdio.h>
#include<stdlib.h>

struct queue{
    int front;
    int rear;
    int size;
    int *arr;
};

void enqueue(struct queue *q, int data){
    // checking overflow
    if(q->rear == q->size-1){
        printf("Queue is full");
    }else{
        q->rear++;
        q->arr[q->rear] = data;
    }
}

void dequeue(struct queue *q){
    if(q->front == -1){
        printf("Stack is empty");
        return;
    }
    int removed = q->arr[q->front];
    q->front++;
    printf("%d is removed", removed);
}

void display(struct queue *q){
    if(q->front == -1 && q->front > q->rear){
        printf("Queue is empty");
        return;
    }
    printf("Queue elements (front to rear):\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
}

int main(){
    struct queue *q;
    q->front = -1;
    q->rear = -1;
    q->size = 20;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q,20);
    enqueue(q,10);
    display(q);
    dequeue(q);
    display(q);
    
    return 0;
}