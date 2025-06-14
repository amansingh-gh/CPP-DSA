// #include <iostream>
// #include<vector>
// using namespace std;
// #include <string>
// #define MaxArrSize 100000


// int countBits(int n, int *resultsArr) {
// 	vector<int>bits(n+1, 0);
//     for(int i=1; i<=n; i++){
//         ans[i] = ans[i>>1] + (i&1);
//     }
//     return ans;


// }

// void printArrayElements(int *resultsArr, int resultsArrLength) {
// 	int index;
// 	for(index = 0; index < resultsArrLength - 1; index++) {
// 		cout << resultsArr[index] << ",";
// 	}
// 	cout << resultsArr[index] << endl;
// }

// int main(int argc, char *argv[]) {
// 	int n = atoi(argv[1]);
// 	int resultsArr[MaxArrSize];
// 	int resultsArrLength = countBits(n, resultsArr);
// 	printArrayElements(resultsArr, resultsArrLength);
// 	return 0;
// }