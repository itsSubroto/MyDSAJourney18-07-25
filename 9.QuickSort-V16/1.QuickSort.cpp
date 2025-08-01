#include<bits/stdc++.h>
using namespace std;

int f(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int>& arr,int low,int high){
    if(low<high){
        int pIndex;
        pIndex = f(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main(){
    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

    // function call for sorting
    qs(arr, 0, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}