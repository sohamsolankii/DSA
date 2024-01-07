#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
    int books, weight;
    cin >> books >> weight;

    int n = books;

    vector<int> price(n);
    for(int i =0; i< n;i++) cin >> price[i];

    vector<int> pages(n);
    for(int i =0; i< n;i++) cin >> pages[i];

    vector<vector<int>> dp(n+1,vector<int>(weight+1));
    
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= weight; j++){

            int w = pages[i-1];
            int val = price[i-1];

            int pick = (j >= val ? dp[i-1][j - val] + w : 0);
            int skip = dp[i-1][j];

            dp[i][j] = max(pick,skip);
        }
    }

    cout << dp[books][weight] << endl;

    
    return 0;
}