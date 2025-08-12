#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// ! Mapping

int oneOccurrenceElement(vector<int> arr){
    map<int, int> mpp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    //Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }   
    
    

    return -1;
}
int main(){
    
    vector<int> arr = {1,1,2,2,3,4,4,5,5,6,6};

    int ans = oneOccurrenceElement(arr);
    cout << "the single occurrence element is :- " << ans;
    return 0;
}