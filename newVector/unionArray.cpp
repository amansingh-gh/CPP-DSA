#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>a{2,4,6,8};
  vector<int>b{1,3,7};

  vector<int>ans;
  for(int i=0; i<a.size(); i++){
    ans.push_back(a[i]);
  }

  for(int i=0; i<b.size(); i++){ 
    ans.push_back(b[i]);
  }

  cout << "The union is : "<< endl;
  for(auto val:ans){
    cout << val << " ";
  }
  return 0;
}