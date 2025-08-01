#include<bits/stdc++.h>
using namespace std;

// Q1:- print N -1

void f(int i,int n){

    if(i<1)
        return;

    cout << i <<" - "<< i<<","<<n<<endl;
    f(i - 1, n);
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}