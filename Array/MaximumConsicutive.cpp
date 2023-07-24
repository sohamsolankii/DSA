#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss secound
using namespace std;
    
int32_t main()
{
    vi v = {1,1,0,1,1,1,0,1,1};     // maximum = 3
    int maxi = 0;
    int count = 0;

    rep(i,0,v.size()){
        if(v[i]==1){
            count++;
            maxi = max(count,maxi);
        }  
        else{ 
            count=0;
        }
      }

    cout <<maxi << endl;
    
    return 0;
}