#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > A) {
        int target = 0;
        map<long long, int>mp;
        int n = A.size();
        long long sum = 0;
        int maxlen = 0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                maxlen = max(maxlen, i+1);
            }
            long long rem = sum-target;
            if(mp.find(rem)!=mp.end()){
                int len = i-mp[rem];
                maxlen=max(maxlen, len);
            }
            
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            
        }
        return maxlen;

}