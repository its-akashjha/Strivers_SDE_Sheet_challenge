#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
        map<char, int>mp;
        int n = s.size();
        int maxcnt = 0;
        int left = 0, right = 0;
        
        while(right<n){
            
            if(mp.find(s[right])!=mp.end()){
                left = max(mp[s[right]]+1,left);
            }
            maxcnt = max(maxcnt, right-left+1);
            mp[s[right]]=right;
            right++;
            
        }
        return maxcnt;
}