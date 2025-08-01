// Iterative C++ program to count
// number of digits in a number
#include <bits/stdc++.h>
using namespace std;

bool countDigit(int x) {

    int dup = x;
    int rev = 0;
  
    if(x<0) return false;


    while (x != 0) {

        int lastDigit = x % 10;
        rev = (rev * 10) + lastDigit;
        x = x / 10;
    }
    if (rev==dup)
    {
        return true;
    }
    
    return false;
}

// LeetCode solution
 bool isPalindrome(int x) {
    int dup = x;
    int rev = 0;
    // negative number can'not be palindrome
    if(x<0) return false;
    
    while (x != 0) {

        int lastDigit = x % 10;
        x = x / 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastDigit < -8))
            return 0;
        rev = (rev * 10) + lastDigit;
    }
    if (rev==dup)
    {
        return true;
    }
    
    return false;
    }

int main() {
   int  x ;
   cin >> x;
   cout << countDigit(x);
   return 0;
}