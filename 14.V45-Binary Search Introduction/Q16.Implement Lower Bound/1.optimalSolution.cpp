#include<bits/stdc++.h>

using namespace std;


// Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.

int binarySearch(vector<int> a, int target){
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

    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 10;

    int ans = binarySearch(a, target);
    if(ans==-1){
        cout << "The lower bound of "<<target <<" is not present in the array";
    }else{
        cout << "The lower bound of "<<target <<" is index ->"<<ans <<" value -> "<<a[ans] ;
    }
    return 0;
}
