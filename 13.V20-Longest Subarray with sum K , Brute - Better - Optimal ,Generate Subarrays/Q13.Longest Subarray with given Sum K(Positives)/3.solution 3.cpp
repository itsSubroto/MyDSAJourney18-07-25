#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.



// !separate the sub array and sum

int findSubArray(vector<int> arr,int targetSum){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum==targetSum){
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum - targetSum;

        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);

        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i;

        }


       
        
    }
    
    // for(auto it:preSumMap){
    //     cout << it.first << " -> " << it.second<<endl;
    // }


    return maxLen;
}
int main(){
    
    vector<int> arr = {1,2,2,3,4,1,1,1,5};
    int targetSum = 3;

    int ans = findSubArray(arr,targetSum);
    cout <<endl<< "the longest sub Array is :- " << ans;
    return 0;
}