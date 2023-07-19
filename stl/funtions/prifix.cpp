#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    vector<int> v {1,2,3,4};
    
    vector<int> prefix(v.size());

    partial_sum(v.begin(),v.end(), prefix.begin());

    for(auto it : prefix){
        cout << it << " ";
    }
    return 0;
}