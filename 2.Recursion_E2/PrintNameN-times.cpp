#include<bits/stdc++.h>
using namespace std;

// Q1:- print your name N-times using Recursion

void f(int i,int n){

    if(i>n)
        return;

    cout << "subroto " << i<<" "<<n<<endl;
    f(i + 1, n);
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}