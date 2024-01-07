#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
const int mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0 ;i < n ; i++) cin >> v[i];

    vector<vector<int>> dp(n+1, vector<int>(x+1));

    // k peli value che je aapde joiye che to 0 pchi kai jotu nthi
    for(int i = 0 ; i <= n; i++){
        dp[i][0] = 1;
    }


    // for(int i = n-1 ; i >= 0 ; i--){        
    //     for(int sum = 1 ; sum <= x ; sum++){

    //         // skipping
    //         int skip = dp[i+1][sum];
    //         int pick = 0;

    //         if(v[i] <= sum){
    //             pick = dp[i][sum - v[i]];
    //         }
    //         dp[i][sum] = (skip + pick) % mod;
    //     }   
    // }

    // cout << dp[0][x] << endl;

    // dp[0][0] = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= x; j++){
            dp[i][j] = dp[i-1][j];

            if(j - v[i-1] >= 0){
                (dp[i][j] += dp[i][j - v[i-1]]) %= mod;
            }
        }
    }

    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= x; j++) {
    //         cout << dp[i][j] ;
    //     }
    //     cout << endl;
    // }

    cout << dp[n][x] << endl;

    return 0;
}

/*

Input:

3 9
2 3 5

Output:

3

Dp table:
    0 1 2 3 4 5 6 7 8 9

2   1 0 1 0 1 0 1 0 1 0

3   1 0 1 1 1 1 2 1 1 2

5   1 0 1 1 1 2 2 2 3 3

*/