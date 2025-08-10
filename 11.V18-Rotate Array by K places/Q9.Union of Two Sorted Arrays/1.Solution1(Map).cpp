#include<bits/stdc++.h>

using namespace std;

// Q :- Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    // for finding the unique elements of both array
    map<int, int> map1;

    // for storing the unique element of both the array
    vector<int> unionVector;

    // for the array1
    for (int i = 0; i < n; i++)
    {
        map1[arr1[i]]++;
    }

    


    // for the array2
    for (int i = 0; i < m; i++)
    {
        map1[arr2[i]]++;
    }
    

    // Now adding unique element -> map keys to the vector
    for(auto it:map1){
        unionVector.push_back(it.first);
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