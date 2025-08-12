#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// ! Hashing

int oneOccurrenceElement(vector<int> arr){

    int maxi = arr[0];
    // finding the maximum element
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(arr[i], maxi);
    }
    // cout <<"max element :- " <<maxi << endl;

    vector<int> hashArr(maxi+1, 0);

    for (int i = 0; i < arr.size(); i++)
    {
        hashArr[arr[i]]++;
    }

    // debugging
    // for (int i = 0; i < hashArr.size(); i++)
    // {
    //     cout<<i<<"->"<<hashArr[i]<<endl;
    // }


  
    for (int i = 0; i < hashArr.size(); i++)
    {
        if (hashArr[i]==1)
        {
            // cout << "one occurence- " << i << endl;
            return i;
        }
        
    }
    
    
    
    

    return -1;
}
int main(){
    
    vector<int> arr = {1,1,2,2,3,4,4,5,5,6,6};

    int ans = oneOccurrenceElement(arr);
    cout << "the single occurrence element is :- " << ans;
    return 0;
}