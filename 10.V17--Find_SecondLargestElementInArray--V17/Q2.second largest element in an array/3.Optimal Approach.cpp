#include<bits/stdc++.h>

using namespace std;

// Q1 : - find the second largest && second smallest element from the given array


int findSecondSmallest(vector<int>& arr){

    if(arr.size()<2)
        return -1;
    int smallest=INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]<secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}
int findSecondLargest(vector<int>& arr){
    if(arr.size()<2)
        return -1;
    int largest=INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
int main(){
    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

   int sLarge= findSecondLargest(arr);
   int sSmall= findSecondSmallest(arr);

   cout << "Second smallest :- " << sSmall << endl;
   cout << "Second largest :- " << sLarge << endl;


   return 0;
}

