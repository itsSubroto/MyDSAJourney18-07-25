#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> a, int target){
    int n = a.size();

    int low = 0, high = n-1;

    while (low<=high)
    {
        int mid = (low + high) / 2;

        if(a[mid]==target){
            return mid;
        }
        else if (target>a[mid])
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }

    return -1;
}

int main(){

    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 17;

    int ans = binarySearch(a, target);
    if(ans==-1){
        cout << "The target value is not present in the array";
    }else{
        cout << "The index of target value is "<<ans<<endl;
    }
    return 0;
}
