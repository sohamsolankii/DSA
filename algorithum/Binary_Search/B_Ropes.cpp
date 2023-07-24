#include<bits/stdc++.h>
using namespace std;
    
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test ll t; cin>>t; while(t--)
#define int ll
using ll = long long;
using pi = pair<ll, ll>;
using vi = vector<ll>;
#define vp vector<pi>
#define mii map<int,int>
    
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define print(n) cout << n << endl
#define deb(n) cout << n << " ";
#define double long double
#define stoi stoll
#define elif else if
#define pb push_back
#define eb emplace_back
#define pf push_front
    
#define rf(it,n) for(auto it : n)
#define fl(i,n)  for(int i=0;i<n;i++)
#define fl1(i,n)  for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
    
template <typename T, typename U>
pair<T, T> divmod(T x, U y) {
  T q = floor(x, y);
  return {q, x - q * y};
}
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
template <typename T>
ostream& operator<<(ostream& os, const vector<vector<T>>& mat){
     for (const auto& row : mat){
        for (const auto& elem : row)
            os << elem << " ";
        os << endl;}
     return os;
}
#define all(x) x.begin(), x.end()
#define lcm(a,b) (a*b)/gcd(a,b)
#define locase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upcase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define minel(v) *min_element(all(v))
#define maxel(v) *max_element(all(v))
#define rev(x) reverse(all(x))
#define summ(v) accumulate(all(v),int(0))
#define factorial(v) accumulate(all(v), (int)1, multiplies<int>())
#define cou(v,n) count(v.begin(),v.end(),n);
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) \
  sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
    
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second > b.second);
}

bool good(double n,double k,vi v){
    int s =0;
    rep(i,0,v.size()){
        s += floor(v[i]/n);
    }
    return s >= k;
}   
void solve(){
    double n,k;
    cin >> n >> k;

    vi v(n);
    cin >> v;

    double l =0,r=1e8;

    for(int i =0;i<100;i++){
        double m = (l+r)/2;

        if(good(m,k,v)){
            l =m;
        }
        else{
            r =m;
        }
    }
    cout << setprecision(20) << l << "\n";
}
signed main()
{
    ios;
    //test
    solve();
    
    return 0;
}