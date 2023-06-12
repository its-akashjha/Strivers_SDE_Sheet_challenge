#include <bits/stdc++.h>

int subarraysXor(vector<int> &A, int B)
{
    int cnt =0;
    map<int, int>mp;
    int n = A.size();
    mp[cnt]++;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum^A[i];
        int rem = sum^B;
        cnt+=mp[rem];
        mp[sum]++;
    }
    return cnt;
}