#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// !linear search

int oneOccurrenceElement(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
  {
    int num = arr[i];
    int cnt = 1;
    for (int j = 0; j < arr.size(); j++)
    {
      
      if(arr[j]==num){
        cnt++;
      }
    }
    
    if(cnt==2)
      return arr[i];
  }
  
    
    return -1;
}
int main(){
    
    vector<int> arr = {1,1,2,2,3,4,4,5,5};

    int ans = oneOccurrenceElement(arr);
    cout << "the single occurrence element is :- " << ans;
    return 0;
}