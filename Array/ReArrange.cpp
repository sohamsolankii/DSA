#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define mii map<int,int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
using namespace std;
    
int32_t main()      // arrange in plus and minus order
{
    vi v = {1,-1,2,3,-2,-3};
    int n = v.size();

    vi tem(n,0);

    int posIndex = 0, negIndex = 1;
    rep(i,0,n){
        if(v[i]>0){
            tem[posIndex] = v[i];
            posIndex += 2;
        }
        else{
            tem[negIndex] = v[i];
            negIndex += 2;
        }
    }

    for(auto &it : tem){
        cout << it << " ";
    }
    
    return 0;
}