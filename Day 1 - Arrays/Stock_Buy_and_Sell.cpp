#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
        int n = prices.size();
        int maxprofit = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            mini = min(mini, prices[i]);
            maxprofit = max(maxprofit, prices[i]-mini);
        }
        return maxprofit;
}