#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0 ;i < n ;i++) cin >> v[i];

    vector<int> dp(k+1,1e9);
    dp[0] = 0;

    // dp[x] --> dp[x - ci]

    for(int i = 1; i <= k; i++){
        // finding dp[x]
        for(int j = 0; j < n ;j++){
            if(v[j] <= i){
                dp[i] = min(dp[i], dp[i - v[j]] + 1) ;
            }
        }
    } 

    cout << (dp[k] < 1e9 ? dp[k] : -1) << endl;
    
    return 0;
}

// TC O(n*x) SC O(x)