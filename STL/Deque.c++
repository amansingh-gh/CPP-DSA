#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(20);
    d.push_front(10);
    for(auto i : d){
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for(auto i : d){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}