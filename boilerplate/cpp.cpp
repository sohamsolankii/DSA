/*

{
  // Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and
  // description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
  // $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the
  // same ids are connected.
  // Example:
  "boilerplate": {
    "prefix": "boilerplate",
    "body": [
      "#include<bits/stdc++.h>",
      "using namespace std;",
      "\t",
      "#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);",
      "#define test ll t; cin>>t; while(t--)",
      "using ll = long long;",
      "#define int ll",
      "#define double long double",
      "\t",
      "#define stoi stoll",
      "#define yes cout << \"YES\" << endl",
      "#define no cout << \"NO\" << endl",
      "#define endl '\\n'",
      "#define print(n) cout << n << endl",
      "#define deb(n) cout << n << \" \";",
      "#define debg(n) cout << n;",
      "\t",
      "#define rf(it,n) for(auto it : n)",
      "#define fl(i,n)  for(int i=0;i<n;i++)",
      "#define fl1(i,n)  for(int i=1;i<=n;i++)",
      "#define rep(i,a,b) for(int i=a;i<b;i++)",
      "#define per(i, a, b) for (int i = a; i >= b; i--)",
      "\t",
      "template<class T> using pq = priority_queue<T>;",
      "template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;",
      "template <typename typC>",
      "istream &operator>>(istream &cin, vector<typC> &a){",
      "    for (auto &x : a)",
      "        cin >> x;",
      "    return cin;",
      "}",
      "template <typename T>",
      "ostream& operator<<(ostream& os, const vector<T>& v){",
      "    for (const auto& elem : v)",
      "        os << elem << \" \";",
      "    return os;",
      "}",
      "#define all(x) x.begin(), x.end()",
      "#define lcm(a,b) (a*b)/gcd(a,b)",
      "#define locase(s) transform(s.begin(),s.end(),s.begin(),::tolower)",
      "#define upcase(s) transform(s.begin(),s.end(),s.begin(),::toupper)",
      "#define minel(v) *min_element(all(v))",
      "#define maxel(v) *max_element(all(v))",
      "#define summ(v) accumulate(all(v),int(0))",
      "#define mul(v) accumulate(all(v), (int)1, multiplies<int>())",
      "#define cou(v,n) count(v.begin(),v.end(),n);",
      "#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))",
      "#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))",
      "#define UNIQUE(x) \\",
      "  sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()",
      "#define unique(v) v.erase(std::unique(all(v)), v.end())",
      "\t",
      "bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){",
      "    return (a.second > b.second);",
      "}",
      "\t",
      "void solve(){",
      "    $0",
      "}",
      "signed main()",
      "{",

      "    ios;",
      "    test",
      "    solve();",
      "\t",
      "    return 0;",
      "}"
    ],
    "description": "Log output to console"
  }
}

*/