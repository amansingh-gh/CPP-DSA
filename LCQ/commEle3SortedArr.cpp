#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> secondMethod(const vector<int>& a, const vector<int>& b, const vector<int>& c) {
    vector<int> res; // vector to store multiple common elements
    set<int> st;     // Set used to remove duplicate common elements from an array
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size() && k < c.size()) {
        if (a[i] == b[j] && b[j] == c[k]) {
            st.insert(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else if (b[j] < c[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    for (auto i : st) {
        res.push_back(i);
    }
    return res;
}

int main() {
    vector<int> a{1, 5, 10, 20, 40, 80};
    vector<int> b{6, 7, 20, 80, 100};
    vector<int> c{3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> res = secondMethod(a, b, c);

    cout << "Common elements are: " << endl;
    for (auto i : res) {
        cout << i << " ";
    }

    
    // Brute Force
    // vector<int> ans;

    // for (int i = 0; i < a.size(); i++) {
    //     for (int j = 0; j < b.size(); j++) {
    //         for (int k = 0; k < c.size(); k++) {
    //             if (a[i] == b[j] && b[j] == c[k]) {
    //                 ans.push_back(a[i]);
    //             }
    //         }
    //     }
    // }

    // for (auto i : ans) {
    //     cout << i << " ";
    // }

    return 0;
}
