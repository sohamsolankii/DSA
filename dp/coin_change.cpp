#include<bits/stdc++.h>
#include<climits>
using namespace std;

// bottom up approch
int miniForCoinChnage(int change, vector<int> coin){
    vector<int> dp(change+1,0);
    dp[0] =0;

    for(int i=1;i<=change;i++){
        dp[i] = INT_MAX;

        for(auto it : coin){
            if(i-it >=0 and dp[i-it]!=INT_MAX){
                dp[i] = min(dp[i], (dp[i-it]+1));
            }
        }
    }

    return dp[change] = INT_MAX ? -1 : dp[change];
}
int main(){
    vector<int> coin = {1,5,7,10};
    int change = 10;

    cout << miniForCoinChnage(change,coin) << endl;
}