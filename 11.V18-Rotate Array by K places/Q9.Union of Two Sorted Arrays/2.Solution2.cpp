#include<bits/stdc++.h>

using namespace std;

// Q :- Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    // declare a set for the unique and sorted element storing
    set<int> s;

    // for adding the unique elements of the set to the vector
    vector<int> unionVector;

    // for arr1
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    // for arr2
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    // putting the element to the vector
    for(auto it:s){
        unionVector.push_back(it);
    }

    return unionVector;
}
int main(){
    int n = 10, m = 7;
    int arr1[n] = {1,5,2,3,6,7,2,3,9,1};
    int arr2[m] = {10,8,2,7,11,4,3};

    vector<int> ans= findUnion(arr1,arr2, n, m);

    for(auto it:ans){
        cout <<it<< " ";
    }
    return 0;
}