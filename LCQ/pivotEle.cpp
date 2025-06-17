#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        int mid = st + (end - st) / 2;

        while (st <= end) {
            if (st == end) {
                return st;
            }
            if (mid < end && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (mid - 1 >= st && arr[mid - 1] > arr[mid]) {
                return mid - 1;
            }
            if (arr[st] > arr[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
            mid = st + (end - st) / 2;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; // Example rotated array
    int pivot = sol.pivotIndex(arr);
    cout << "Pivot index: " << pivot << endl;
    return 0;
}
