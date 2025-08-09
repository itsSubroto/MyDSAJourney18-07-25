#include<bits/stdc++.h>

using namespace std;

// Q : - Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

void reverse(int arr[], int start, int end){
    while (start<=end)
    {
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void rotate(int arr[],int n,int k){
    k = k % n;
    if(k>n)
        return;
    
    // rotate the k th postion
    reverse(arr, 0, k - 1);

    // reverse the rest of the element of the array
    reverse(arr, k, n - 1);

    // reverse the whole array
    reverse(arr, 0, n - 1);


     // print the fresh rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

int main(){

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;

    rotate(arr, n,k);
    return 0;
}