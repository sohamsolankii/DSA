#include<bits/stdc++.h>         // arrays of vector -- number of column is dynamic
using namespace std;

 void printVec(vector<int> &v)            // referance banse
 
{
    cout << "size of vector :" << v.size() << endl;
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " " ;
    }
}         
int main()
{
    int n;
    cin >> n;
    vector<int> v[n];       // n vectors declare tya che

    // input
    for(int i=0;i<n;i++){
        int t;
        cin >> t;           // size of particular vector

        for(int j=0;j<t;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    
    //output
    for(int i=0;i<n;i++){
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
