#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[],int n){

    // select minimum and swap

    for (int i = 0; i <= n-2; i++)
    {
        
        int mini = i;
        // loop for finding the minimum from i - (n-1)  -- mane oi element ta theke tar uporer element er moddhe comapare
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j]<arr[mini])
                mini = j;
        }
        
        // swap between i and the minimum

        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini] = temp;
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr,n);


    // display the sorted array

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }


    return 0;
}