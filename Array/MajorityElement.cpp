#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
using namespace std;

// maping    
// int32_t main()
// {
//     // majority is apper > n/2
//     vi v {2,2,3,3,1,2,2};

//     map<int,int> mpp;
//     rep(i,0,v.size()){
//         mpp[v[i]]++;
//     }

//     for(auto it:mpp){
//         if(it.ss > (v.size()/2)){
//             cout << it.ff<< endl;
//         }
//     }
    
//     return 0;
// }

// boyer moore's voting algorithum
int32_t main()
{
    vi v {1,2,1,2,2,1,2};
    int cnt =0;
    int el;

    rep(i,0,v.size()){
        if(cnt==0){
            cnt = 1;
            el  = v[i];
        }
        else if(v[i] == el){
            cnt++;
        }
        else cnt --;

    }
    cout << el << endl;

    int cnt1 =0 ;
    rep(i,0,v.size()){
        if(v[i]==el){
            cnt1++;
        }
    }
    if(cnt1 > (v.size()/2)){
        cout << el << endl;
    }
  
}