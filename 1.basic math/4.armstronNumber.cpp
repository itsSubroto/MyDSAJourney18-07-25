// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

bool doSomething(int x) {

    int dup = x;
    int arm = 0;
  
    if(x<0) return false;


    while (x != 0) {

        int lastDigit = x % 10;
        arm = arm + (lastDigit * lastDigit * lastDigit);
        x = x / 10;
    }
    if (arm==dup)
    {
        return true;
    }
    
    return false;
}

int main() {
   int  x ;
   cin >> x;
   cout << doSomething(x);
   return 0;
}