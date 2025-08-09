#include<bits/stdc++.h>

using namespace std;

// Q :- Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.


vector<int> shiftZero(vector<int> arr,int n){

    vector<int> temp;
    // add the non zero element to the temp 
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nonZero=temp.size();

    // move the non zero element to the main array
    for (int i = 0; i < nonZero; i++)
    {
        arr[i] = temp[i];
    }

    // fill the rest element with 0
    for (int i = nonZero; i < n; i++)
    {
        arr[i] = 0;
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