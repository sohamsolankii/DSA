#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n; cin >> n;

    vector<int> dp(n+1, 1e9);
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        
        for(int j = 0 ; j < s.size() ; j++){
            int digit = s[j] - '0';

            if(digit != 0){
                dp[i] = min(dp[i], dp[i - digit] + 1);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}