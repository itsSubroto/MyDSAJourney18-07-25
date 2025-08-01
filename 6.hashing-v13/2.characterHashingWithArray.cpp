#include<bits/stdc++.h>

using namespace std;

// Q :- how many times this numbers present in the array. 
// solving using arrayhashing

int main(){
    string s;
    cin >> s;

    

    // pre compute
    int hash[26] = {}; // 13 means the at most number is 13.
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] -'a']++;
    }
    

    // Getting the query numbers
    int p ;
    cin >> p ;
    while(p--){
        char q;
        cin >> q;
        //Fetching
        cout <<q << " -> " <<hash[q - 'a']<<endl;
    }

    return 0;
}