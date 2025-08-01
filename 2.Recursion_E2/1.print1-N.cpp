#include<bits/stdc++.h>
using namespace std;

// Q1:- print 1 - N


void f(int i,int n){

    if(i>n)
        return;

    cout << i <<" - "<< i<<","<<n<<endl;
    f(i + 1, n);
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}