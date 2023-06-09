#include <bits/stdc++.h> 
long long merge(long long *a, long long low, long long mid, long long high){
    
    int cnt = 0;
    int left = low;
    int right = mid+1;
    vector<long long>temp;
    
    while(left<=mid && right<=high){
        
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            cnt+=(mid-left+1);
            right++;
        }
        
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
    return cnt;
    
}

long long mergesort(long long *a, long long low, long long high){
    
    long long cnt = 0;
    if(low>=high) return cnt;
    long long mid = (low+high)/2;
    
    cnt+=mergesort(a, low, mid);
    cnt+=mergesort(a, mid+1, high);
    cnt+=merge(a, low, mid, high);

    return cnt;
    
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr, 0 , n-1);
}