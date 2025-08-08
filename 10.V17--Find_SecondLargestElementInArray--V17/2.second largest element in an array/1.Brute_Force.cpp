#include<bits/stdc++.h>

using namespace std;

// Q1 : - find the second largest && second smallest element from the given array

void getElements(vector<int>& arr){
    sort(arr.begin(), arr.end());

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    cout << "Second smallest :- " << arr[1]<<endl;
    cout << "Second largest :- " <<arr[arr.size()-2] ;
}   


int main(){
    

    int x;
    vector<int> arr;
    while (cin>>x)
    {
        arr.push_back(x);
    }

    getElements(arr);

    return 0;
}



