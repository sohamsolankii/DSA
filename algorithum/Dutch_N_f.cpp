#include<bits/stdc++.h>
using namespace std;

// get frequency make and over write the arry

// Dutch national flag algorithum    // TC - O(n)
int32_t main()
{
    vector<int> v = {1,0,2,0,0,1,1,2,2,0,1};
    int n = v.size();

    int low =0 , mid =0 , high = n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }

    for(int it : v){
        cout << it <<" ";
    }
    
    return 0;
}