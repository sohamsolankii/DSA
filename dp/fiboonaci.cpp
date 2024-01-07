#include<bits/stdc++.h> // fectorial tc-> exponantiol tc -> linear
using namespace std;
int cnt =0;
vector<int> memo;

// top down apprcoh  -- memoization 
int fib(int n){
    cnt++;
    if(n<=2) return 1;

    // memorise  part                              // without this part this become recursion
    if(memo[n] != -1) return memo[n];

    // recursive relation
    return memo[n] = fib(n-1) + fib(n-2);

}

// bottom up approch ->  nani problem thi mota pr jaiye  -- tabulation
int fibb(int n){
    cnt++;
    vector<int> dp(n+1,-1);
    
    dp[1] = dp[2] = 1;

    for(int i=3; i<=n ;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}
int main(){
    int n;
    cin >> n;
    memo.resize(n+1, -1);

    cout << fibb(n) << endl;
    cout << "count of number : "<< cnt << endl;
}

// 1 1 2 3 5 8
