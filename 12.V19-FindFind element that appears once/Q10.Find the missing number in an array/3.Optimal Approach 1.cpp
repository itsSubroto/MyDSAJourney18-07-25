#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array
int findTheMissing(int arr[],int n){
    int realSum = (n * (n + 1)) / 2;
    int missingSum = 0;

    for (int i = 0; i < n-1; i++)
    {
        missingSum += arr[i];
    }

    return realSum - missingSum;


}
int main(){
    int n=5;
    int arr[n - 1] = {1, 3, 4, 2};

    int ans = findTheMissing(arr, n);
    cout << "the missing no is :- " << ans;
    return 0;
}