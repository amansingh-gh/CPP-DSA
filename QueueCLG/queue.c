#include<stdio.h>

struct Queue{
    int arr[5];
    int front;
    int rear;
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

// rear
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


// shifted queue front
int dequeue2(){
    int v;
    if(q.front == q.rear){
        printf("Queue is empty\n");
        return -1;
    }

    v = q.arr[q.front];
    for(int i=1; i<q.rear; i++){
        q.arr[i-1] = q.arr[i];
    }
    q.rear--;
    return v;
}
 

int peek(){
    if(q.front==q.rear){
        printf("Queue is empty\n");
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
    printf("Element removed\n");
    dequeue2();
    printf("Peek: %d\n", peek());
    enque(60);
    enque(70);
    enque(80);
    printf("Peek: %d\n", peek());
    
    return 0;
}