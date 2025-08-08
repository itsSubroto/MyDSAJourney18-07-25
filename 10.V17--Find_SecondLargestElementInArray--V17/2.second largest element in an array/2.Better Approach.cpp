#include<bits/stdc++.h>

using namespace std;

// Q1 : - find the second largest && second smallest element from the given array
void findLargest(vector<int>& arr)
{
    int smallest = INT_MAX;
    int Second_smallest = INT_MAX;

    int largest = INT_MIN;
    int Second_largest = INT_MIN;

    // for finding the smallest and the largest element
    for (int i = 0; i < arr.size(); i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // cout << largest<<endl;
    // for finding the second smallest and second largest element
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<Second_smallest && arr[i]!=smallest){
            Second_smallest = arr[i];
        }

        // cout << Second_smallest<<endl;
        

        if(arr[i]>Second_largest && arr[i] != largest){
            Second_largest = arr[i];
        }
        // cout << Second_largest<<endl;

    }

    cout << "second smallest :- "<<Second_smallest<<endl;
    cout << "second largest : - " << Second_largest;
}  


int main(){
    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

    findLargest(arr);

    return 0;
}

