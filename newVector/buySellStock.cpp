#include<iostream>
using namespace std;

int buySellStock(int prices[], int n){
    int buy = prices[0];
    int maxProfit = 0;

    for(int i=0; i<n; i++){
        if(buy > prices[i]){
            buy = prices[i];
        }
        else if(prices[i]-buy> maxProfit){
            maxProfit = prices[i]-buy;
        }
    }
        return maxProfit;
}

int main(){
    int prices[] = {1,5,12,10};
    int size = sizeof(prices)/sizeof(prices[0]);

    int ans = buySellStock(prices,size);
    cout << ans << endl;
    return 0;
}