#include<bits/stdc++.h>
using namespace std;
    
const int mod = 1e9+7;
int fun(int n){

    vector<int> dp(n+1,0);
    dp[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(j <= i){
                dp[i] = (dp[i] + dp[i-j]) % mod;
            }
        }
    }

    return dp[n];
}
signed main()
{
    int n;
    cin >> n;

    cout << fun(n) << endl;
    
    return 0;
}