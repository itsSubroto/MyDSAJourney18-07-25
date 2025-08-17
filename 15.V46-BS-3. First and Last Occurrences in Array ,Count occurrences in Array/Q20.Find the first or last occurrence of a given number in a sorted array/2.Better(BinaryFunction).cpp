#include<bits/stdc++.h>

using namespace std;

// Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

int lowerBound(vector<int> a, int target){
    int n = a.size();

    int low = 0, high = n-1;
    int ans = n;
    while (low<=high)
    {
        int mid = (low + high) / 2;

        if (a[mid]>=target)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }

    return ans;
}


int upperBound(vector<int> a, int target){
    int n = a.size();

    int low = 0, high = n-1;
    int ans = n;
    while (low<=high)
    {
        int mid = (low + high) / 2;

        if (a[mid]>target)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }

    return ans;
}


pair<int,int> findThePosition(vector<int> arr, int target){
    int n = arr.size();
    int lb = lowerBound(arr, target);

    if(lb==n||arr[lb]!=target)
    {
        return {-1,-1};
    }
    else{
        return {lb, upperBound(arr,target)-1};
    }

}


int main(){

    vector<int> arr = {3,4,13,13,13,20,40};
    int target = 13;

    pair<int,int> ans = findThePosition(arr, target);

    if(ans.first == -1)
        cout << "The target is not present in the array.";
    else{
        cout << "the first occurrence of "<<target<<" is "<<ans.first<<" and last is "<<ans.second;
    }
    return 0;
}