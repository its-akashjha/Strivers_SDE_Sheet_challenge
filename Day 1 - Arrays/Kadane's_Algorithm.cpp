#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
        long long maxSum = LONG_MIN;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(sum<0){
                sum=0;
            }
            if(sum>maxSum){
                maxSum=sum;
            }
            
        }
        
        return maxSum;
}