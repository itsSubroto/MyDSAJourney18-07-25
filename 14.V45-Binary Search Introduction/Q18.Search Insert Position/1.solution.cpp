#include<bits/stdc++.h>

using namespace std;


// Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

int searchInsert(vector<int> a, int target){
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

int main(){

    vector<int> a = {1, 2, 4, 7};
    int target = 6;

    int ans = searchInsert(a, target);
     cout << "The search index of "<<target <<" is index -> "<<ans<<" after "<<a[ans-1]  ;
    
    return 0;
}
