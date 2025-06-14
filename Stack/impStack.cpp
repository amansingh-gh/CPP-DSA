#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }

    void push(int data){
        if(top<size-1){
            // size available
            top++;
            arr[top] = data;
        }
        else{
            // space not available
            cout << "Stack Overflow\n";
        }
    }

    void pop(){
        if(top==-1){
            cout << "Stack underflow\n";
        }
        else{
            top--;
        }
    }

    int getTop(){
        if(top==-1){
            cout << "No element in stack";
        }
        else{
            return arr[top];
        }
    }
    
    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};



int main(){
    Stack s(5);
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    

    cout << s.getTop(); 
    return 0;
}