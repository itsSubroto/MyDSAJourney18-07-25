#include<bits/stdc++.h>

using namespace std;

// Q : - Problem Statement: Given an array of N integers, left rotate the array by one place.


void rotate(int arr[],int n){
    int temp[n];
    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];

    // print the fresh rotated element
    for (int i = 0; i < n; i++)
    {
        cout << temp[i]<<" ";
    }
    
}

int main(){

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    rotate(arr, n);
    return 0;
}