#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[],int n, int num){

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[n] = {4, 6, 8, 7, 2};
    int num = 6;

    int postion = linearSearch(arr, n, num);

    cout << "position of " << num << " is " << postion;
    return 0;
}