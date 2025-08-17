#include<bits/stdc++.h>

using namespace std;

// Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

pair<int,int> findThePosition(vector<int> arr,int target){
    int n = arr.size();
    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            if(first==-1){
                first = i;
            }

            last = i;
        }
    }

    return {first, last};
}


int main(){

    vector<int> arr = {3,4,13,13,13,20,40};
    int target = 13;

    pair<int,int> ans = findThePosition(arr, target);

    if(ans.first == -1)
        cout << "The target is not present in the array.";
    else{
        cout << "the first occurrence of "<<target<<" is "<<ans.first<<" and last is "<<ans.second;
    }
    return 0;
}