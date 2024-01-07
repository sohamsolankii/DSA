#include<bits/stdc++.h>
using namespace std;
#define ll long long    
int mod = 1e9+7;
int dp[100005][105];

// with space optimization
signed main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0 ; i < n ;i++){
        cin >> v[i];
    }

    // initialize the dp table(prev, dp)
    vector<ll> prev(m+1);
    vector<ll> dp(m+1);

    if(v[0] == 0)
        fill(prev.begin() + 1, prev.end(), 1);
    else 
        prev[v[0]] = 1;


    // build the tables
    for(int i = 1; i < n; i++){
        int lowerbound = v[i] == 0 ? 1 : v[i];
        int upperbound = v[i] == 0 ? m : v[i];

        for(int j = lowerbound; j <= upperbound; j++){
            dp[j] += prev[j];
            if(j > 1) dp[j] += prev[j - 1];
            if(j < m) dp[j] += prev[j + 1];

            dp[j] %= mod;
        } 

        prev = dp;
        fill(dp.begin(), dp.end(), 0l);
    }

    ll ans = accumulate(prev.begin(), prev.end(), 0l);

    cout << ans%mod << endl;
    
    return 0;
}

// without space optimization
// int main(){
// 	int a, b, ans=0;
// 	cin>>a>>b;

//     vector<int> aa;
// 	for(int i=1;i<=a;i++)
// 		cin>>aa[i];
	
// 	if(aa[1]==0)
// 		for(int i=1;i<=b;i++) dp[1][i]=1;
// 	else dp[1][aa[1]]=1;

// 	for(int i=2;i<=a;i++)
// 	{
// 		for(int j=1;j<=b;j++)
// 		{
// 			if(aa[i]==0||aa[i]==j)
// 			{
// 				dp[i][j]=dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
// 				dp[i][j]%=1000000007;
// 			}
// 			else dp[i][j]=0;
// 		}
// 	}
// 	for(int j=1;j<=b;j++)
// 	{
// 		ans+=(dp[a][j])%1000000007;
// 		ans%=1000000007;
// 	}
// 	cout<<ans<<endl;
// }