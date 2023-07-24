#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
using namespace std;

// vector<pair> method easy with maps
int32_t main()
{
    vi v = {1,1,2,2,3,4,4};
    vp v1;

    int n= v1.size();
    int f= 1;
    rep(i,1,v.size()){
        if(v[i]==v[i-1]){
            f++;
        }
        else{
            v1.push_back({v[i-1],f});
            f=1;
        }
    }
    v1.pb({v[n-1],f});

    for(auto x:v1){
        if(x.ss==1){
            cout << x.ff << endl;
            break;
        }
    }
    
    return 0;
}

// xor method
// int32_t main()          
// {
//     vi v = {1,1,2,3,3,4,4};

//     int xo =0;
//     rep(i,0,v.size()){
//         xo = xo ^ v[i];
//     }

//     cout << xo << endl;
// }