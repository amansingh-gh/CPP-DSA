#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minLength(vector<int>systemState, vector<int>dist){
    int totalCableLength = 0;
    int n = systemState.size();

    for(int i=0; i<n; i++){
        if(systemState[i]==0){
            int minCable = INT_MAX;
            for(int j=0; j<n; j++){
                if(systemState[i]==1){
                    int cableLength = abs(dist[i]-dist[j]);
                    minCable = min(minCable,cableLength);
                }
            }
            totalCableLength = totalCableLength+minCable;
        }
    }


    return totalCableLength;
}

    int main() {
        // Input for systemState
        int systemState_size;
        cin >> systemState_size;
    
        vector<int> systemState(systemState_size);
        for (int i = 0; i < systemState_size; i++) {
            cin >> systemState[i];
        }
    
        // Input for dist
        int dist_size;
        cin >> dist_size;
    
        vector<int> dist(dist_size);
        for (int i = 0; i < dist_size; i++) {
            cin >> dist[i];
        }
    
        // Validate sizes (optional)
        if (systemState_size != dist_size) {
            cout << "Input size mismatch!" << endl;
            return 1;
        }
    
        int result = minLength(systemState, dist);
        cout << result << endl;
    
        return 0;
    }
