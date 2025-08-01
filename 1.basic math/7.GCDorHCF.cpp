// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

int doSomething(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i <= min(n1,n2); i++)
    {
        if(n1%i==0 && n2%i==0){
            gcd =  i;
        }
    }
   
    return gcd;
}

int main() {
   int  x1 ;
   int  x2 ;
   cin >> x1;
   cin >> x2;
cout<<doSomething(x1,x2);
   return 0;
}