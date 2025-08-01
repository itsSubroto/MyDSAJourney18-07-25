#include<bits/stdc++.h>
using namespace std;

// Q1:- print 1-N by using "backtracing"

void f(int i,int n){

    if(i<1)
        return;

    f(i - 1, n);
    cout << i <<" - "<< i<<","<<n<<endl;
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}