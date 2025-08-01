#include<bits/stdc++.h>
using namespace std;
void dosomthing(int num[],int &n){
 for(int i=0;i < n;i++){
        cout<<num[i]<<endl;

    }
    cout<<"int the function"<< n<<endl;
}

int main(){
    int n=5;
    int num[n];
    for(int i=0;i < 5;i++){
        cin>>num[i];
    }
    dosomthing(num,n);
    cout<<n;
   
    return 0;
}