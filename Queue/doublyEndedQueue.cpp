#include<iostream>
using namespace std;

class Deque{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    Deque(int size){
        this->size = size;
        this->front = -1;
        this->rear = -1;
        arr = new int[size];
    }

void pushRear(int data){
       // Queue full
       if(front==0 && rear == size-1){
        cout << "Circular Queue is full\n";
        return;
    }
    // single element case
    else if(front==-1){
        front=rear = 0;
        arr[rear] = data;
    }
    else if(rear==size-1 && front!=0){
        rear = 0;
        arr[rear] = data;
    }
    else{
        rear++;
        arr[rear] = data;
    }
}

void pushFront(int data){
    // Queue full
    if(front==0 && rear == size-1){
     cout << "Circular Queue is full\n";
     return;
 }
 // single element case
 else if(front==-1){
     front=rear = 0;
     arr[rear] = data;
 }
 else if(front==0 && rear!=size-1){
    front = size-1;
     arr[front] = data;
 }
 else{
     front--;
     arr[front] = data;
 }
}

void popFront(){
        if(front == -1 && rear == -1){
            cout << "Circular queue is empty"<< endl;
            return;
        }
        else if(front==0 && rear==0){
            arr[front]=-1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

void popRear(){
    if(front == -1 && rear == -1){
        cout << "Circular queue is empty"<< endl;
        return;
    }
    else if(front== rear){
        arr[front]=-1;
        front = -1;
        rear = -1;
    }
    else if(rear == 0){
        rear = size-1;
    }
    else{
        rear--;
    }
}

};

int main(){
    Deque dq(5);
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.popFront();
    dq.popRear();
    dq.pushFront(1);

    
    return 0;
}