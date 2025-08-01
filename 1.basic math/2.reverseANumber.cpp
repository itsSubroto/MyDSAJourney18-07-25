// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

int countDigit(int x) {
  	
    int rev = 0;
  
    while (x != 0) {

        int lastDigit = x % 10;
        rev = (rev * 10) + lastDigit;
        x = x / 10;
    }
    return rev;
}

int main() {
   int  x ;
   cin >> x;
   cout << countDigit(x);
   return 0;
}