#include<bits/stdc++.h>

using namespace std;

// Q1 : - find the largest element from the given array

int sorting(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}


int main(){
    // -------------------------------
    // ! Approach
    // sort the array
    // retrun the last element which will be the largest element
    // -------------------------------

    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

    int maxElement=sorting(arr);
    cout << "Largest Element is :- " << maxElement;

    return 0;
}



// ! time complexity - O(nlogn)
// ! space complexity - O(n)