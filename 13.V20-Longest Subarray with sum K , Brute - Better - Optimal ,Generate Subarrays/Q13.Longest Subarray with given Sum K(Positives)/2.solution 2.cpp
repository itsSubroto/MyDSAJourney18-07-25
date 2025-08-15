#include<bits/stdc++.h>

using namespace std;
// Q :- Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.



// !separate the sub array and sum

int findSubArray(vector<int> arr,int targetSum){
    int n = arr.size();
    int len = 0;
    string elements = "";

    for (int i = 0; i < n; i++)
    {

        long sum = 0;
        elements = "";
        for (int j = i; j < n; j++)
        {
            
            elements += std::to_string(arr[j]);
            sum = sum + arr[j];
                

            
            if(sum==targetSum) {
                len = max(len, j-i+1);
                cout << elements<<" , ";

            }
            else if(sum>targetSum){
                break;
            }
            
            
        }
    }
    
    
    return len;
}
int main(){
    
    vector<int> arr = {1,2,2,3,4,1,1,1,5};
    int targetSum = 10;

    int ans = findSubArray(arr,targetSum);
    cout <<endl<< "the longest sub Array is :- " << ans;
    return 0;
}