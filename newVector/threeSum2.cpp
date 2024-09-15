#include<iostream>
#include<vector>
using namespace std;

void findPair(vector<int>a, vector<int>b, vector<int>c, int sum){
  for(int i=0; i<a.size(); i++){
    for(int j=i+1; j<b.size(); j++){
      for(int k=j+1; j<c.size(); j++){
        if(a[i]+b[j]+c[k]==sum){
          cout << "The Pair is : (" << a[i] << "," << b[j] << "," << c[k] << ")";
        }
      }
    }
  }
}

int main(){
  vector<int>a{1,2,3,4,5,12};
  vector<int>b{2,6,8,7,0};
  vector<int>c{8,1,2,3,0};
  int targetSum = 12;
  findPair(a,b,c,targetSum);
  return 0;
}