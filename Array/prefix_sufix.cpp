#include<bits/stdc++.h>
using namespace std;
    
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
using ll = long long;
using vi = vector<ll>;

const int N = 1e7;
int pre[N];
int suf[N];
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi v = {1,2,3,4,5,6,7};
    int n = v.size();

    rep(i,1,n+1)
        pre[i] += pre[i-1]+v[i-1];
    per(i,n-1,0){
        suf[i] = suf[i+1] + v[i];
    }

    rep(i,0,n){
        cout << suf[i] << " ";
    }
    cout << "\n";
    rep(i,0,n+1){
        cout << pre[i] << " ";
    }

    return 0;
}