#include<bits/stdc++.h>

using namespace std;

// Q : - Problem Statement: Given an array of N integers, left rotate the array by one place.


void rotate(int arr[],int n){
    int temp = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    // print the fresh rotated element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

int main(){

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    rotate(arr, n);
    return 0;
}