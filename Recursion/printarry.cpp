#include<bits/stdc++.h>
using namespace std;

void f(vector<int> v, int idx, int n){

    // base case
    if(idx == n) return;
    // self work
    cout << v[idx] << " ";
    // asuumtion
    f(v,idx+1,n);
}
    
int main()
{
    vector<int> v {1,2,3,4,5};
    int n = v.size();
    
    f(v,0,n);

    return 0;
}