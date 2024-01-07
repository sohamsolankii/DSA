#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0 ;i < n ; i++) cin >> v[i];

    vector<int> dp(k+1, 0);
    dp[0] = 1;

    for(int i = 1; i <= k;i++){
        for(int j = 0; j < n; j++){
            if(i - v[j] >= 0)
                dp[i] = (dp[i] + dp[i - v[j]]) % mod;
        }
    }

    cout << dp[k] << endl;

    return 0;
}