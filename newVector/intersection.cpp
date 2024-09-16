#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>a{1,2,3,4,6,8};
  vector<int>b{3,4,9,10};
  vector<int>ans;

  // using 
  for (int i = 0; i < a.size(); i++){
    for(int j=0; j<b.size(); j++){
        if(a[i]==b[j]){
          ans.push_back(a[i]);
        }
    }
}



  //  using While loop
  // int i=0, j=0;
  // while(i<a.size() && j<b.size()){
  //   if(a[i] == b[j]){
  //     // b[j] = -1;
  //     ans.push_back(a[i]);
  //     i++; j++;
  //   }
  //   else if(a[i]<b[j]){
  //     i++;
  //   }
  //   else{
  //     j++;
  //   }
  // }  

  cout << "The answer is : ";
  for(auto val : ans){
    cout << val << " ";
  }

  return 0;
}