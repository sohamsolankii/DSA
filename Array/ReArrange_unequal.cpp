#include<bits/stdc++.h>
#define int long long
#define double long double
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
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
    
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi v = {2,-2,5,6,-1,4};         // size of positive and negative are not same
    int n = v.size();
    vi pos,neg;

    rep(i,0,n){
        if(v[i]>0){
            pos.pb(v[i]);
        }
        else{
            neg.pb(v[i]);
        }
    }

    if(pos.size() > neg.size()){
        rep(i,0,neg.size()){
            v[2*i] = pos[i];
            v[2*i+1] = neg[i];
        }

        int index = 2*neg.size();
        rep(i,neg.size(),pos.size()){
            v[index] = pos[i];
            index++;
        }
    }
    else{
        rep(i,0,pos.size()){
            v[2*i] = pos[i];
            v[2*i+1] = neg[i];
        }

        int index = 2*pos.size();
        rep(i,pos.size(),neg.size()){
            v[index] = neg[i];
            index++;
        }
    }

    for(auto it : v){
        cout << it <<" ";
    }
    
    return 0;
}