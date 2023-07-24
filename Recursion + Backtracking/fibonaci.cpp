#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int fib(int m){
    if(m <= 2) return 1;

    int ans = fib(m-1) + fib(m-2);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n = 5;
    int f = fib(6);

    cout << f << endl;

    // 0 1 1 2 3 5 8

    return 0;
}