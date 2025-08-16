#include<bits/stdc++.h>

using namespace std;


// Problem Statement: You're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
// The floor of x is the largest element in the array which is smaller than or equal to x.
// The ceiling of x is the smallest element in the array greater than or equal to x.


int findFloor(vector<int> a, int target){
    int n = a.size();

    int low = 0, high = n-1;
    int ans = -1;
    while (low<=high)
    {
        int mid = (low + high) / 2;

        if (a[mid]<=target)
        {
            ans = a[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }

    return ans;
}
int findCeil(vector<int> a, int target){
    int n = a.size();

    int low = 0, high = n-1;
    int ans = -1;
    while (low<=high)
    {
        int mid = (low + high) / 2;

        if (a[mid]>=target)
        {
            ans = a[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }

    return ans;
}

int main(){

    vector<int> a ={3, 4, 4, 7, 8, 10};
    int target = 12;

    int floor = findFloor(a, target);
    int ceil = findCeil(a, target);
    cout << "The floor of "<<target<<" is -> " << floor << " && ceil is -> " << ceil;

    return 0;
}
