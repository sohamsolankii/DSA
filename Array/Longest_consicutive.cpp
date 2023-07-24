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
#define print(n) cout << n << endl
    
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
    
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi v = {4,2,3,1,1,1,101,102,100};
    int n = v.size();
    int longest = 1;

    unordered_set<int> st;
    rep(i,0,n){
        st.insert(v[i]);
    }

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end()){
                x= x +1;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }

    print(longest);
    
    return 0;
}