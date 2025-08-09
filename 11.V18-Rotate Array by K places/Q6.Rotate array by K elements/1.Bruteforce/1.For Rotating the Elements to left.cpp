#include<bits/stdc++.h>

using namespace std;

// Q : - Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

void rotate(int arr[],int n,int k){

    k = k % n;
   
    int temp[k];

    // getting the values to the temp array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
        
    }

    // for shifting the element to left
    for (int i = 0; i < n - k;i++){
        arr[i] = arr[k+i];
    }

    // for adding the temp element to the main array
    
    for (int i = n-k; i < n; i++)
    {
        arr[i] = temp[i-(n-k)];
        // i-> (n-k)
        // i-> (n-k)+1
        // i-> (n-k)+2
        // i-> (n-k)+3
        
        // i-(n-k)
        // (n-k)-(n-k) =>0
        // (n-k)+1-(n-k) =>1
        // (n-k)+2-(n-k) =>2
        // (n-k)+3-(n-k) =>3
        // (n-k)+4-(n-k) =>4
    }



    

    // print the fresh rotated element
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