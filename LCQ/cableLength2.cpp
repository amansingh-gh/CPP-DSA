#include<iostream>
#include<vector>
#include<climits> // for INT_MAX
#include<cmath>   // for abs()
using namespace std;

int minLength(vector<int> systemState, vector<int> dist) {
    int totalCableLength = 0;
    int n = systemState.size();

    for (int i = 0; i < n; i++) {
        if (systemState[i] == 0) { // System is OFF
            int minCable = INT_MAX;

            // Search for nearest ON system
            for (int j = 0; j < n; j++) {
                if (systemState[j] == 1) {
                    int cableLength = abs(dist[i] - dist[j]);
                    minCable = min(minCable, cableLength);
                }
            }

            totalCableLength += minCable;
        }
    }

    return totalCableLength;
}