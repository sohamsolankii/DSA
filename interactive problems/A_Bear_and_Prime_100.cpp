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
    
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
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
#define lcm(a,b) (a*b)/gcd(a,b)
#define locase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upcase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define minel(v) *min_element(all(v))
#define maxel(v) *max_element(all(v))
#define summ(v) accumulate(all(v),int(0))
#define mul(v) accumulate(all(v), (int)1, multiplies<int>())
#define cou(v,n) count(v.begin(),v.end(),n)
#define numlength(n) (int)(log10(n)+1)
#define setbit  __builtin_popcountll
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define unique(v) v.erase(std::unique(all(v)), v.end())
int digitsum(int n) {int res = 0;while (n > 0) {res += n % 10;n /= 10;}return res;}
    
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second > b.second);
}
bool fbigssmall(const pair<int,int> &a, const pair<int,int> &b) {
    if (a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}
bool fsmallsbig(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) return (a.second > b.second);
    return (a.first < b.first);
}
bool isPrime(int n){if (n <= 1)return 0;if (n == 2 || n == 3)return 1;if (n % 2 == 0 || n % 3 == 0)return 0;for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return 0;return 1;}
vector<ll> sieve(int n){vector<ll> ans;vector<bool> v(n + 1, 1);rep(i,2,n+1){if (v[i]){ans.pb(i);for (int j = i * i; j <= n; j = j + i)v[j] = 0;}}return ans;}
int modPow(int base, int exp, int mod){int answer = 1;while (exp != 0) {if (exp & 1) { answer = (answer * base) % mod;}base = (base * base) % mod; exp = exp >> 1; }return answer;}
set<ll> printDivisors(ll n){set<ll> v;for (ll i=1; i<=sqrt(n); i++){if (n%i == 0){if (n/i == i)v.insert(i);else{v.insert(i);v.insert(n/i);}}}return v;}
map<ll, ll> printPrimeFactors(int n){map<ll, ll> mp;if (n <= 1)return mp;while (n % 2 == 0){mp[2]++;n /= 2;}while (n % 3 == 0){mp[3]++;n /= 3;}for (int i = 5; i * i <= n; i += 6){while (n % i == 0){mp[i]++;n /= i;}while (n % (i + 2) == 0){mp[i + 2]++;n /= (i + 2);}}if (n > 3)mp[n]++;return mp;}
// n sudhi na primes -- unique divisor of n -- prime div 2^3 = 2 freq 3
    
const int mod = 1000000007;
    
void fun(){
    int max = 100;

    vector<int> v = sieve(max);
    deb(v.size(), v);

    //there are 25 i can 20

    // int low = 0, high = v.size() - 1;

    // while(low <= high){
    //     int mid = (low+high)/2;

    //     cout << v[mid] << endl << flush;
    //     string s;
    //     cin >> s;

    //     if(s == "yes"){

    //     }
    //     else{

    //     }
    // }    

    // deb(printDivisors(99));

    // last 97 then so 
    // 1 3 9
    vector<int> another = {4, 9, 25, 49};

    rep(i,0,4){
        cout << another[i] << endl << flush;

        string s;
        cin >> s;

        if(s == "yes"){
            print("composite");
            cout.flush();
        }
    }
    
    int cnt_yes = 0, cnt_no =0;
    rep(i,0,15){
        cout << v[i] << endl << flush;

        string s;
        cin >> s;

        if(s == "yes"){
            cnt_yes++;
        }
        else    
            cnt_no++;
    }


    cout << ((cnt_yes > 1) ? "composite" : "prime") << endl;
    cout << flush;

}
signed main()
{
    ios;
    fun();
    
    return 0;
}