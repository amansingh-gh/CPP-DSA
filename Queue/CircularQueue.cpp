#include<iostream>
using namespace std;
class CQueue{
    public:
    int size;
    int front;
    int rear;
    int *arr;

    CQueue(int size){
        this->size = size;
        this->front = -1;
        this->rear = -1;
        arr = new int[size];
    }

    
    void push(int data){
        // Queue full
        if(front==0 && rear == size-1){
            cout << "Circular Queue is full\n";
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


    void pop(){
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

};
int main(){
    
    return 0;
}