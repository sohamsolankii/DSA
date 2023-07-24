#include<bits/stdc++.h>
using namespace std;
    
#define int ll
using ll = long long;
using pi = pair<ll, ll>;
using vi = vector<ll>;
#define vp vector<pii>
#define st set<int>
#define mii map<int,int>
#define ff first
#define ss second
    
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define print(n) cout << n << endl
    
#define double long double
#define stoi stoll
#define elif else if
#define pb push_back
#define eb emplace_back
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


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        int a[n+10];
        int f[n+10];
        int b[n+10];
        f[0] = b[n+1] = 0;
        rep(i,1,n+1) cin >> a[i];

        for(int i =1;i<=n;i++){
            f[i] = __gcd(f[i-1],a[i]);
        }
        for(int i = n; i>=1;i--){
            b[i] = __gcd(b[i+1],a[i]);
        }

        while(q--){
            int l, r;
            cin >> l >> r;
            cout << __gcd(f[l-1],b[r+1]) << endl;
        }
    }
    
    return 0;
}