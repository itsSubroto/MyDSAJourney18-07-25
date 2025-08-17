#include<bits/stdc++.h>

using namespace std;

// Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.


int firstPosition(vector<int> arr, int target){
    int n = arr.size();
    int first = -1;
    int low = 0, high = n - 1;

    while (low<=high)
    {
        int mid = (low + high) / 2;
        if(arr[mid]==target){
            first = mid;
            high = mid - 1;
        }else if(arr[mid]<target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return first;
}


int lastPosition(vector<int> arr, int target){
    int n = arr.size();
    int last = -1;
    int low = 0, high = n - 1;
    
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if(arr[mid]==target){
            last = mid;
            low = mid + 1;
        }else if (arr[mid]<target)
        {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        

    }

    return last;
}
pair<int,int> position(vector<int> arr, int target){

    int first = firstPosition(arr, target);
    if(first==-1)
        return {-1, -1};
    
    int last=lastPosition(arr,target);
    return {first, last};
}

int main(){

    vector<int> arr = {3,4,13,13,13,20,40};
    int target = 13;

    pair<int,int> ans = position(arr, target);

    if(ans.first == -1)
        cout << "The target is not present in the array.";
    else{
        cout << "the first occurrence of "<<target<<" is "<<ans.first<<" and last is "<<ans.second;
    }
    return 0;
}