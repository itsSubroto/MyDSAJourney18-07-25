#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
int findTheMissing(int arr[],int n){
   int hashArr[n+1]={0};

   for (int i = 0; i < n-1; i++)
   {
       hashArr[arr[i]] = 1;
    //    cout << hashArr[arr[i]]<<endl;
   }

   for (int i = 1; i <= n+1; i++)
   {
    //    cout << i << "->" << hashArr[i] << endl;
       if (hashArr[i] == 0)
       {
           return i;
       }
   }
   
   
    
    return -1;
}
int main(){
    int n=5;
    int arr[n - 1] = {1, 5, 4, 3};

    int ans = findTheMissing(arr, n);
    cout << "the missing no is :- " << ans;
    return 0;
}