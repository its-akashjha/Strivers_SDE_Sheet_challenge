#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &nums, int s){
   
   sort(nums.begin(), nums.end());
   vector<vector<int>> pair;
   int n = nums.size();
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         int a = nums[i]+nums[j];
         if(a==s){
            pair.push_back({nums[i], nums[j]});
         }
         if(a>s){
            break;
         }
      }
   }
   return pair;
   
   
}