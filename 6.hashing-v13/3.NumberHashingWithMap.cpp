#include<bits/stdc++.h>

using namespace std;

// Q :- how many times this numbers present in the array. 
// solving using arrayhashing

int main(){
    int n;
    cin >> n;

    // Getting the array elements
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    // pre compute
   map<int, int> mpp; // key -> number value-> frequency
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    

    // Getting the query numbers
    int p ;
    cin >> p ;
    while(p--){
        int q;
        cin >> q;
        //Fetching
        cout <<q << " -> " <<mpp[q]<<endl;
    }

    return 0;
}