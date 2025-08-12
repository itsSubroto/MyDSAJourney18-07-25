#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
int findTheMissing(int arr[],int n){
    for (int i = 1; i <=n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]==i){
                // cout << arr[j] << "== "<<i<<" break "<<endl;
                flag = 1;
                break;
            }
            
        }
        if(flag==0)
            return i;
    }
    
    return -1;
}
int main(){
    int n=5;
    int arr[n - 1] = {1, 2, 4, 3};

    int ans = findTheMissing(arr, n);
    cout << "the missing no is :- " << ans;
    return 0;
}