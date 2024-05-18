#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
    int m ; // numner of boke
    int k ; // adjecent flower required

    int n; // vector size
    cin >> m >> k >> n;

    vector<int> boolmday;
    for(auto &it : boolmday) cin >> it ;

    if(m*k > n){cout << -1 << endl;}

    return 0;
}

// bs is all about cut the ranges
// minimum ma opposite polarity na karane most off ans = low and max ma ans = high

// https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0