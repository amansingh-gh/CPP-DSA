#include <iostream>
using namespace std;
#include <string>

int setBits(int n) {
	int count = 0;
	while(n){
		n = n & (n-1);
		count++;
	}
	return count;

}

int main(int argc, char *argv[]) {
    int n = 6;
	cout << setBits(n) << "\n";
	return 0;
}