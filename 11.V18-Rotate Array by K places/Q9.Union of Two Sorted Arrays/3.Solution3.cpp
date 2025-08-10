#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
vector<int> findUnion(int arr1[],int arr2[],int n,int m){

    vector<int> unionVector;

    int i = 0;
    int j = 0;

    while (i<n && j<m)
    {

        if(arr1[i]<= arr2[j]){

            if(unionVector.size()==0 || unionVector.back()!=arr1[i]){
                unionVector.push_back(arr1[i]);
                i++;
            }
        }else{
            if(unionVector.size()==0 || unionVector.back()!=arr2[j]){
                unionVector.push_back(arr2[j]);
                j++;
            }
        }

    }

    while (i<n){
        if(unionVector.back()!=arr1[i]){
                unionVector.push_back(arr1[i]);
                i++;
            }
    }

    while (j<m){
        if(unionVector.back()!=arr2[j]){
                unionVector.push_back(arr2[j]);
                j++;
            }
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