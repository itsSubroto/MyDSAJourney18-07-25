#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the intersection of two sorted arrays.
vector<int> findIntersection(int arr1[],int arr2[],int n,int m){

    vector<int> intersectionVector;


    int i = 0;
    int j = 0;

    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            //cout << arr1[i] << "<" << arr2[j] <<" i= "<<i<< endl;
            i++;
        }else if (arr2[j]<arr1[i]){
            // cout <<arr2[j]<< "<" << arr1[i] <<" j= "<<j<<  endl;
            j++;
        }
        else
        {
            intersectionVector.push_back(arr1[i]);
            // cout << intersectionVector.back()<<endl;
            
            i++;
            j++;
        }
        
    }
    
    

   
    
    

    return intersectionVector;
}

int main(){
    int n = 8, m = 9;
    int arr1[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[] = {2, 3, 3, 4, 4, 5, 6, 6, 7}; 

    vector<int> ans= findIntersection(arr1,arr2, n, m);

    for(auto it:ans){
        cout <<it<< " ";
    }
    return 0;
}