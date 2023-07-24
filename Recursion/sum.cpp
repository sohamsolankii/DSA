#include<bits/stdc++.h>
using namespace std;

    
int f(int n){
    if(n >= 0 and n <=0) return n;

    return f(n/10) + (n%10);

}
int sum(int n){
    int ans =0;
    if(n >= 0 and n <= 9) return ans+n;

    ans += n%10;
    n /= 10;
    return sum(n) + ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = f(n);
    cout << ans << endl;

    return 0;
}