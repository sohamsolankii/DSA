#include<bits/stdc++.h>
using namespace std;

int f(vector<int> v,int idx,int n){
    
    if(idx == n-1) return v[idx];

    return max(v[idx],f(v,idx+1,n));

}
int main()
{
    vector<int> v{1,2,17,6,8,3};
    int n = v.size();
    int maxi = f(v,0,n);

    cout << maxi << endl;  

    return 0;
}