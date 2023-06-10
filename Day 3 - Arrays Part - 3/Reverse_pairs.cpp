#include <bits/stdc++.h> 
void merge(vector<int>&a, int low, int mid, int high){
    
    int left = low;
    int right = mid+1;
    vector<int>temp;
        
    while(left<=mid && right<=high){
        
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
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
    
}

int countpairs(vector<int>&arr, int low , int mid, int high){
    
    int left = low;
    int right = mid+1;
    int cnt = 0;
    for(int i=low;i<=mid;i++){
        
        while(right<=high && 0.5 * arr[i]> arr[right]) right++;
        cnt+=(right-(mid+1));
        
    }
    return cnt;
    
}
    
int mergesort(vector<int>&a, int low, int high){
    
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low+high)/2;
    
    cnt+=mergesort(a, low, mid);
    cnt+=mergesort(a, mid+1, high);
    cnt+=countpairs(a, low, mid, high);
    merge(a, low, mid, high);

    return cnt;
    
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return mergesort(arr, 0, n-1);	
}