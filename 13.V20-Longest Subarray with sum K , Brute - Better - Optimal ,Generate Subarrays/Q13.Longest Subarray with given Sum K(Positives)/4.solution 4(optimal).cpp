#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.



// !separate the sub array and sum

int findSubArray(vector<int> arr,int targetSum){
    int n = arr.size();
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;


    while (right<n)
    {
        while (left<=right && sum>targetSum)
        {
            sum -= arr[left];
            left++;
        }

        if(sum==targetSum){
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if(right<n){
            sum += arr[right];
        }
        
    }
    

    


    return maxLen;
}
int main(){
    
    vector<int> arr = {1,2,2,3,4,1,1,1,5};
    int targetSum = 3;

    int ans = findSubArray(arr,targetSum);
    cout <<endl<< "the longest sub Array is :- " << ans;
    return 0;
}