#include<bits/stdc++.h>

using namespace std;

// Q :- Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.


vector<int> shiftZero(vector<int> arr,int n){

    int j = -1;
    // find the 1st position of zero
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            j = i;
            break;
        }
    }

    if(j==-1)
        return arr;
    // swap the non zero and the zero
    for (int i = j+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[j], arr[i]);
            j++;
        }
    }
    
    

    return arr;
}

int main(){
    vector<int> arr = {4, 0, 1, 0, 2, 0, 5};
    int n = 7;

    vector<int> ans=shiftZero(arr, n);

    // Show element of the array
    for(auto it: ans){
        cout << it << " ";
    }

    return 0;
}