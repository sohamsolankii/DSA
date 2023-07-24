#include<bits/stdc++.h>
using namespace std;
    
#define int ll
using ll = long long;
using pi = pair<ll, ll>;
using vi = vector<ll>;
#define vp vector<pii>
#define mii map<int,int>
#define ff first
#define ss second
    
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
    
#define double long double
#define stoi stoll
#define elif else if
#define pb push_back
#define pf push_front
    
#define all(x) x.begin(), x.end()
#define len(x) ll(x.size())
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define minEl(v) *min_element(all(v))
#define maxEl(v) *max_element(all(v))
#define rev(x) reverse(all(x))
#define sum(v) accumulate(all(v),int(0))
#define factorial(v) accumulate(all(v), (int)1, multiplies<int>())
    
// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     string s;
//     cin >> s;

//     auto it = unique(all(s));
//     cout << string(s.begin(),it) << endl;
    
//     return 0;
// }

int32_t main()
{
    string s;
    cin >> s;

    string str = "";
    str += s[0];
    rep(i,1,s.size()){
        if( s[i] != s[i-1]){
            str += s[i];
        } 
    }

    cout << str << endl;
}