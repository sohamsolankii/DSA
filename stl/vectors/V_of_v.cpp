#include<bits/stdc++.h>         // vectors of vectors -- number of rows and column both dynemic     -- 2 dimensional array
using namespace std;

 void printVec(vector<int> &v)            // referance banse
{
    
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " " ;
    }
    cout << endl;
}         
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;       

    // input
    for(int i=0;i<n;i++){
        int t;
        cin >> t;           
        vector<int> tem;

        for(int j=0;j<t;j++){
            int x;
            cin >> x;
            tem.push_back(x);
        }
        v.push_back(tem);
    }
    
    //output
    v[0].push_back(10);
    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }

    // cout << v[0][1];   behave like 2D array number of row fix but column not fix
    return 0;
}

/*
2       -- main input
2           -- first input size
1 2             -- first elemnt
3       
1 2 3       -- secound input size
size of vector :2
1 2 size of vector :3
1 2 3

*/