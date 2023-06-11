#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int count1 = 0;
        for(auto it : nums){
            
            int currentsum = it;
            int currentstreak = 1;
            if(!st.count(it-1)){
                
                while(st.count(currentsum+1)){
                    currentsum++;
                    currentstreak++;
                }
                
            }
            count1 = max(count1, currentstreak);
            
        }
        return count1;
}