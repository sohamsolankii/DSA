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
    
int32_t main()
{
    vi v = {7,1,3,2,4,5,6,2};       // 1 - 6 = 5
    int n = v.size();

    int maxProfit = 0;
    int mini = v[0];

    rep(i,0,n){
        int cost = v[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,v[i]);
    }

    cout << maxProfit << endl;

    return 0;
}