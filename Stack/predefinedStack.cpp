#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "Top element is: "<< s.top() << endl;
    s.pop();
    cout << "Top element is: "<< s.top() << endl;
    cout << "size of stack is: "<<s.size() << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}