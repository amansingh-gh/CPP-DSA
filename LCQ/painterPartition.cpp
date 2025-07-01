#include <iostream>
#include<vector>
using namespace std;

long long isPossible(vector<int>boards, int k, long long mid){
    long long timeSum = 0;
    int c = 1;
    for(int i=0; i<boards.size(); i++){
        if(boards[i]>mid) return false;
        if(boards[i]+timeSum > mid){
            c++;
            timeSum = boards[i];
            if(c>k) return false;
        }
        else{
            timeSum += boards[i];
        }
    }
    return true;
}

long long minTime(vector<int>&boards, int k){
    int st = 0;
    long long length = boards.size();
    long long end = 0;
    for(int i=0; i<length; i++){
        end += boards[i];
    }

    long long ans = 0;
    while(st<=end){
        long long mid = st+(end-st)/2;
        if(isPossible(boards,k,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}


int main(){
    int k = 2; // number of painters

    std::vector<int> boards = {10, 20, 30, 40};

    int result = minTime(boards, k);
    std::cout << result << std::endl;

    return 0;
}

// Problem Statement: Dilpreet wants to paint his dog's home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.

// Return the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered [2,3,4] or only board [1] or nothing but not boards [2,4,5].
