#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> v(n,vector<char>(n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++) cin >> v[i][j];
    }

    vector<vector<int>> dp(n,vector<int>(n));

   if(v[n-1][n-1] == '*') dp[n-1][n-1] = 0;
   else dp[n-1][n-1] = 1;


    for(int i = n-1; i>=0; i--){
        for(int j = n-1; j>= 0; j--){
            if(i == n-1 and j == n-1) 
                continue;

            if(v[i][j] == '*') 
                dp[i][j] = 0;
            else{
                int ans1 = i < n-1 ? dp[i+1][j] : 0;
                int ans2 = j < n-1 ? dp[i][j+1] : 0;
                dp[i][j] = (ans1+ans2) % mod;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){cout << dp[i][j] << " ";}
        cout << endl;
    }

    cout << dp[0][0] << endl;


    return 0;
}