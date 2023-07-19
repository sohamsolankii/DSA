#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int


    
int main()
{
    unordered_map<string,int> m;
    int n;
    cin >> n;
    rep(i,0,n){
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }

    
    return 0;
}

/*  diffrence with map

1. inbuilt implementation
2. time complaxity
3. valid key datatype


*/