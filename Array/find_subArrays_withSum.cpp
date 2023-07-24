#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,-3,1,1,1,4,2,-3};
    int n = v.size();
    int k =3;

    unordered_map<int,int> mp;
    mp[0] = 1;

    int preSum =0, cnt =0;
    for(int i=0;i<n;i++){
        preSum += v[i];

        int remove = preSum - k;
        cnt += mp[remove];
        mp[preSum] += 1; 
    }

    cout << cnt << endl;
   
}

// total size x secound part is b so first part x-b = a
// sme here total size presum secound part k so first part = preSum - k 