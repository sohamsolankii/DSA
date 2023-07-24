#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int lb(vector<int> v, int target){

    int lo =0, hi = v.size()-1;
    int ans =-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;

        if(v[mid] >= target){   // right side ja
            ans = mid;
            hi = mid-1;
        }
        else if(target > v[mid]){  // left side ja
            lo = mid+1;
        }
    }   

    return ans;
}

int ub(vector<int> v, int target){

    int lo =0, hi = v.size()-1;
    int ans =-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;

        if(v[mid] > target){   // right side ja
            ans = mid;
            hi = mid-1;
        }
        else{  // left side ja
            lo = mid+1;
        }
    }   

    return (ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    vector<int> v = {1,1,1,1,2,2,4,4,4,4};
    int target = 1 ;

    vector<int> result;
    int l = lb(v,target);
    int r = ub(v,target);

    result.push_back(l);
    result.push_back(r);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}