#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
int consecutiveOnes(vector<int> arr){
    int cnt = 0, maximumTime = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1){
            cnt++;
            maximumTime = max(cnt, maximumTime);
        }else{
            cnt = 0;
        }
    }
    
    return maximumTime;
}
int main(){
    
    vector<int> arr = {1, 1, 1, 0, 1, 1};

    int ans = consecutiveOnes(arr);
    cout << "the maximum occurrence of 1 is :- " << ans;
    return 0;
}