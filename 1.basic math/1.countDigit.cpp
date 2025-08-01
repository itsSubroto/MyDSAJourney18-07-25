// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
  	// Base case
    if (n == 0)
        return 1;
  
    int count = 0;
  
  	// Iterate till n has digits remaining
    while (n > 0) {
      
      	// Remove rightmost digit
        n = n / 10;
      
      	// Increment digit count by 1
        ++count;
    }
    return count;
}


// leet code solution
 int reverse(int x) {
    	
    int rev = 0;
  
    while (x != 0) {

      int lastDigit = x % 10;
      x = x / 10;
      if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7))
          return 0;
      if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastDigit < -8))
          return 0;
      rev = (rev * 10) + lastDigit;
        
    }
    return rev;
}

int main() {
   int  n ;
   cin >> n;
   cout << countDigit(n);
   return 0;
}