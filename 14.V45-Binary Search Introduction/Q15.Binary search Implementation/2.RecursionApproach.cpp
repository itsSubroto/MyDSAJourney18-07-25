#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> a, int target,int low, int high){

    //base case
    if(low> high) return -1;

    int mid= (low + high) / 2;

    if(a[mid] == target) return mid;
    else if(target>a[mid]) return binarySearch(a, target, mid+1,high);
    else return binarySearch(a, target, low,mid-1);




}



int main(){

    vector<int> a={3, 4, 6, 7, 9, 12, 16, 17};
    int n=a.size();
    int target=3;

    int ans=binarySearch(a,target,0,n-1);
    if(ans==-1) cout<<"the target value is not present";
    else cout<<"the target value is present at index -> "<<ans;
    return 0;


}