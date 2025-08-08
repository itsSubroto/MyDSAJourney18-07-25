#include<bits/stdc++.h>

using namespace std;

// Q1 : - find the largest element from the given array
int largestElement(vector<int> arr){
    int largest = arr[0];
    for (int i = 0; i < arr.size();i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

    int a=largestElement(arr);

    cout << "The largest element is :- " << a;
    return 0;
}