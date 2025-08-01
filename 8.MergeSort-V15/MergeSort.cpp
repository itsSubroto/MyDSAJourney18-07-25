#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int low,int mid, int high){
    // temp storage
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If the upper loop brakes that means it can possible the left element or right element left so add them into the temp array

    while (left<=mid)
    {
        temp.push_back(arr[left]);
            left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    // Now move the element of temp array to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    
    
}

void merge_sort(int arr[], int low, int high){
    // Base case
    if(low==high)
        return;

    // Find out the mid index 
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);

    // Merge the single elements sorted
    merge(arr, low, mid, high);
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr,0,n-1);


    // display the sorted array

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }


    return 0;
}