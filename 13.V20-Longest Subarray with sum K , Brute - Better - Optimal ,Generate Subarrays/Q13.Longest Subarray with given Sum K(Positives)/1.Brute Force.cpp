#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.



// !separate the sub array and sum

int findSubArray(vector<int> arr,int targetSum){
    int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                
            }

            
            if(sum==targetSum) {
                len = max(len, j-i+1);
            }
            
            
        }
        
    }
    
    
    return len;
}
int main(){
    
    vector<int> arr = {1,2,2,3,4,1,1,1,5};
    int targetSum = 3;

    int ans = findSubArray(arr,targetSum);
    cout << "the longest sub Array is :- " << ans;
    return 0;
}