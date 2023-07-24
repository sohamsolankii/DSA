#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_backN
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

void reverse(string s)
{
    stack<string> st;
    rep(i, 0, s.length())
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void solve()
{
    string s;
    getline(cin, s);

    reverse(s);
}

int32_t main()
{
    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}