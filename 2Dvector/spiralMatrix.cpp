#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans; // handling empty matrix case

        int m = matrix.size();
        int n = matrix[0].size();
        int total_ele = m * n;

        int stRow = 0;
        int endCol = n - 1;
        int endRow = m - 1;
        int stCol = 0;

        int count = 0;
        while (count < total_ele) {
            // Printing Starting Row
            for (int i = stCol; i <= endCol && count < total_ele; i++) {
                ans.push_back(matrix[stRow][i]);
                count++;
            }
            stRow++;

            // Printing Ending Col
            for (int i = stRow; i <= endRow && count < total_ele; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // Printing Ending Row
            for (int i = endCol; i >= stCol && count < total_ele; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // Printing starting Col
            for (int i = endRow; i >= stRow && count < total_ele; i--) {
                ans.push_back(matrix[i][stCol]);
                count++;
            }
            stCol++;
        }
        return ans;
    }
int main(){
    
}
