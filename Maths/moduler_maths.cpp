#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    //a%n === b%n
    cout << 13%7  << " " << 41%7 << endl;


/*
    (13 + 35 + 5) % 7 = (53) % 7=4
    (41 + 35 + 5) % 7 = (81) % 7 = 4
    (13*4) % 7 = (52) %7  = 3
    (41*4) % 7 = (52) %7  = 3
    
    if
        a===b (mod N)
    then
        a-b 0 (mod N)
        a-b is divisible by N

    a-b = n*k or a = b+ n*k
*/

    return 0;
}