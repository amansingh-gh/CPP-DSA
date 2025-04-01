#include<stdio.h>
#include<math.h>
struct Queue{
    int arr[5];
    int front, rear;
}q;
void enque(int v){
    if(q.rear == 5){
        printf("Queue is full");
        return;
    }
    q.arr[q.rear] = v;
    q.rear++;
    printf("Inserted: %d\n",v);
}

int dequeue(){
    int v;
    if(q.front == q.rear){
        printf("Queue is empty");
        return -1;
    }
    q.arr[q.front];
    q.front++;
    return v;
}

int peek(){
    if(q.front==q.rear){
        printf("Queue is empty");
        return -1;
    }
    return q.arr[q.front];
}

int main(){
    q.front = 0;
    q.rear = 0;
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);

    printf("Peek: %d\n",peek());
    dequeue();
    dequeue();
    printf("Peek: %d\n", peek());
    
    return 0;
}