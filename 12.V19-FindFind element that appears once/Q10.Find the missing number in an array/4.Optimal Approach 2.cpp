#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array
int findTheMissing(int arr[],int n){
    int xor1 = 0,xor2 = 0;;
    for (int i = 0; i <n-1; i++)
    {
        xor1= xor1^(i+1);
        xor2= xor2^arr[i];
    }

    xor1 = xor1 ^ n;
    int missNumber = xor1 ^ xor2;

    return missNumber;
}
int main(){
    int n=5;
    int arr[n - 1] = {1, 3, 2, 5};

    int ans = findTheMissing(arr, n);
    cout << "the missing no is :- " << ans;
    return 0;
}