#include<bits/stdc++.h>

using namespace std;


// Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

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

int main(){

    vector<int> a = {3, 5, 8, 9, 15, 19};
    int target = 16;

    int ans = upperBound(a, target);
    if(ans==-1){
        cout << "The upper bound of "<<target <<" is not present in the array";
    }else{
        cout << "The upper bound of "<<target <<" is index ->"<<ans <<" value -> "<<a[ans] ;
    }
    return 0;
}
