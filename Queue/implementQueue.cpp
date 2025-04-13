#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size, front, rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0, rear = 0;
    }

    void push(int data){
        if(rear==size){
            cout << "Queue is Full\n";
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(rear == front){
            cout << "Queue is full\n";
            return;
        }else{
            arr[front] = -1;
            front++;
 
            if(front==rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout << "Queue is empty\n";
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
            return rear-front;
    }
    
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Front element is: "<< q.getFront() << endl;
    cout << "Size is: " << q.getSize() << endl;
    return 0;
}