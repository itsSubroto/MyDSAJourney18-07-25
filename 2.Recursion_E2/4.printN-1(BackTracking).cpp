#include<bits/stdc++.h>
using namespace std;

// Q1:- print N-1 by using "backtracing"

void f(int i,int n){

    if(i>n)
        return;

    f(i + 1, n);
    cout << i <<" - "<< i<<","<<n<<endl;
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}