#include<bits/stdc++.h>
using namespace std;

// Q:- print N-th Fibonacci Number

int f(int n){
    cout << n << " is called." << endl;
    if(n<=1)
        return n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}
int main(){
    int n;
    cin >> n;
    cout<<f(n);

    return 0;
}