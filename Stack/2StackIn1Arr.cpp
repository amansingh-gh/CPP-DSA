#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data){
        if(top1-top2==1){
            cout << "Overflow";
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1==-1){
            cout << "Stack underflow";
        }
        else{
            arr[top1] = 0;
            top1--;
        }

    }

    void push2(int data){
        if(top2-top1==1){
            cout << "Stack overflow";
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2==size){
            cout << "Stack underflow";
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        cout << endl;
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    Stack s(5);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    
    s.pop1();
    s.print();
    s.push1(30);
    s.print();
    
    s.push2(80);
    s.print();
    s.push2(90);
    s.print();
    s.pop2();
    s.print();
    return 0;
}