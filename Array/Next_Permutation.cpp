#include<bits/stdc++.h>
#define int long long
#define double long double
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define mii map<int,int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
    
// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     vi v = {2,1,3};

//     next_permutation(v.begin(),v.end());
//     // for(auto it : v){
//     //     cout << it << " ";
//     // }   
//     return 0;
// }

main(){

    vi v = {2,1,5,4,3,0,0};
    int n = v.size();

    int ind = -1;

    // longer prefix match from behind
    for(int i=n-2;i>=0;i--){
        if(v[i] < v[i+1]){
            ind = i;
            break;
        }
    }

    // if no dip not smaller number than reverse
    if(ind == -1){
            reverse(v.begin(),v.end());
            for(auto it : v) {
                cout << it << " " ;
            }       
    }

    // findout first grater than deep point   
    for(int i= n-1;i >= ind;i--){
        if(v[i] > v[ind]){
            swap(v[i],v[ind]);
            break;
        }
    }

    // swap other elements in smallest order
    if(ind != -1){
        reverse(v.begin()+ind + 1,v.end());
        for(auto it : v) {
                    cout << it << " " ;
        }
    }

}
/*
    3,1,2 ne 6 rite gothvi sakay ene permutation kevay 3! = 6

    like 1,2,3 < 1,3,2 < 2,1,3 < 2,3,1 < 3,1,2 < 3,2,1


*/