#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1, mid = st + (end - st) / 2;
    int index = -1;
    while (st < end){
        if (arr[mid] == target){
            index = mid; // store index
            // left search
            end = mid - 1;
        }
        else if (target > arr[mid]){
            // right search
            st = mid + 1;
        }   
        else if (target < arr[mid]){
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
}

int lastOcc(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1, mid = st + (end - st) / 2;
    int index = -1;
    while (st <= end){
        if (arr[mid] == target){
            index = mid; // store index
            // left search
            st = mid + 1;
        }
        else if (target > arr[mid]){
            // right search
            st = mid + 1;
        }   
        else if (target < arr[mid]){
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return index;
}

    int main(){
        vector<int> v{1, 3, 4, 4, 4, 4,4, 4, 6, 7};
        int target = 4;

        int ans1 = firstOcc(v, target);
        cout << "Fist occurence at index: "<< ans1 << endl;
        
        int ans2 = lastOcc(v, target);
        cout << "Last occurence at index: "<< ans2 << endl;

        int totalOccurence = (ans2 - ans1) + 1;
        cout << "Total Occurence is: "<< totalOccurence;
        return 0;
    }