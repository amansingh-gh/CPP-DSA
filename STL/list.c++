#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    cout << l.size() << endl;

    for(auto i : l){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}