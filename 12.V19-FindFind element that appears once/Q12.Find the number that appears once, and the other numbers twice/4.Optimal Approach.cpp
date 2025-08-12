#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// ! XOR

int oneOccurrenceElement(vector<int> arr){
    int xor1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xor1= xor1^arr[i];
    }

    return xor1;
}
int main(){
    
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5,6};

    int ans = oneOccurrenceElement(arr);
    cout << "the single occurrence element is :- " << ans;
    return 0;
}