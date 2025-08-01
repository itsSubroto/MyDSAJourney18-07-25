// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

bool doSomething(int n) {
    int factors = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            factors = factors + 1;
            if((n/i) !=i){
            factors = factors + 1;
            }
        }
    }
    if(factors==2)
        return true;
    return false;
}

int main() {
   int  x ;
   cin >> x;
    cout<<doSomething(x);
   return 0;
}