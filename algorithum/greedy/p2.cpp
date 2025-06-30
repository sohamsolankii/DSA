// Q: Given binary string, count number of substrings which has equal number of 0s and 1s


/* 
    Solution:
    Run-Length Grouping + Adjacent Comparison

*/

#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define deb(x...)
#endif
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt =1;
    vector<int> grp;
    for(int i=1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        else{
            grp.push_back(cnt);
            cnt=1;
        }
    }
    grp.push_back(cnt);

    int ans =0;
    for(int i=1; i < grp.size(); i++){
        ans += min(grp[i], grp[i-1]);
    }
    cout << ans << '\n';
    deb(grp);

    return 0;
}