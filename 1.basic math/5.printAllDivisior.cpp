// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

void doSomething(int n) {
    vector<int> ls;
    for (int i = 1; i*i<=n; i++)
    {
        if(n%i==0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);

            }
        }
    }

    sort(ls.begin(), ls.end());

    for(auto on:ls) cout << on << " ";
}

int main() {
   int  x ;
   cin >> x;
    doSomething(x);
   return 0;
}