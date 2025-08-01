#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[],int n){

    // find min and place to left
    //  1st - 2 element
    //  2st - 3 element
    //  3st - 4 element
    //  4st - 5 element
    
    for (int i = 0; i <= n-1; i++)
    {
        // cout << "value of i = " << i<<endl;
        int j = i;

        while (j>0 && arr[j-1]>arr[j])
        {
            // cout << "swap b/w " << arr[j-1]<<" & "<<arr[j]<<endl;

            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            // array after swap
            // for (int k = 0; k < n; k++)
            // {
            //     cout<< arr[k]<<" ";
            // }
            // cout << endl;

            j--;
            cout << "now J= " << j << endl;
        }   
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

    insertion_sort(arr,n);


    // display the sorted array

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }


    return 0;
}