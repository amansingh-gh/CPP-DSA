#include <iostream>
#include <vector>
using namespace std;

vector<int> search2DBS(vector<vector<int>> v, int target)
{

    int row = v.size();
    int cols = v[0].size();
    int st = 0;
    int end = row * cols - 1;

    while (st <= end) 
    {

        int mid = st + (end - st) / 2;
        int rowIdx = mid / cols;
        int colIdx = mid % cols;
        int midVal = v[rowIdx][colIdx];

        if (midVal == target)
        {
            cout << rowIdx << " , " << colIdx;
            return {rowIdx, colIdx};
        }
        else if (midVal < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 10},
        {4, 5, 6, 15},
        {7, 8, 9, 17},
        {20, 22, 28, 29},
        {99, 84, 86, 3}};

    int target = 10;

    vector<int> ans = search2DBS(v, target);

    if (ans[0] != -1 && ans[1] != -1)
    {
        cout << "The index is: (" << ans[0] << ", " << ans[1] << ")\n";
    }
    else
    {
        cout << "Target not found.\n";
    }
    cout << 4*ans[0]+ans[1];
    return 0;
}