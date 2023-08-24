#include <iostream>
#include <map>
using namespace std;

int main(){

    // Creation of map
    map<int, string> createdMap;
    // Insertion in map
    createdMap[1] = "Hey";
    createdMap[2] = "Hello";
    createdMap[3] = "singh";
    // Accessing the mapped value
    for(int i=0; i<createdMap.size(); i++){
        cout << createdMap[i] << endl;
    }
return 0;
}