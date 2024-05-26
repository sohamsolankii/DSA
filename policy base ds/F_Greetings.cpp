// JAY SHREE RAM!! 

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
    
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define deb(x...)
#endif
    
using namespace std;
using namespace __gnu_pbds;
    
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test int t; cin>>t; while(t--)
using ll = long long;
#define int ll
#define double long double
    
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // *find_by_order, order_of_key
//order_of_key = number of elements lesser than the key
//find_by_order = iterator of element at the given index
// finding the kth element
// cout<< *A.find_by_order(0);
// no. of elements smaller than x
// cout<<A.order_of_key(7);
// lower bound
// cout<<*A.lower_bound(0);
// upper bound
// cout<<*A.upper_bound(0);
// Remove elements
// A.erase(1);
    

#define stoi stoll
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define print(n) cout << n << endl
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
    
#define pb push_back
#define ff first
#define ss second
    
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a){
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for (const auto& elem : v)
        os << elem << " ";
    return os;
}
#define all(x) x.begin(), x.end()
#define s0rt(v) sort(all(v))

void fun(){
    int n;
    cin >> n;

    vector<pair<int,int>> vp;

    rep(i,0,n){
        int x, y;
        cin >> x>> y;

        vp.pb({x,y});
    }

    // my bad s&e points are not smililr

    sort(all(vp));

    pbds item;
    int ans = 0;

    per(i,n-1,0){
        ans += item.order_of_key(vp[i].second);

        item.insert(vp[i].ss);
    }

    print(ans);
}
signed main()
{
    ios;
    test
    fun();
    
    return 0;
}