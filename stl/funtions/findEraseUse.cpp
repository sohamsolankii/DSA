#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define all(v) v.begin(),v.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    vector<int> v{2,3,4};
    v.insert(v.end()-1,8);
    v.erase(v.begin()+1);

    auto it = find(all(v),-1);


    return 0;
}