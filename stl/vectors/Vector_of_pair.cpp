#include<bits/stdc++.h>     // vectors of pairs
using namespace std;

void printVec(vector<pair<int,int>> &v)            // referance banse
{
    cout << "size of vector :" << v.size() << endl;
    for(int i=0;i<v.size();i++){ 
        cout << v[i].first << " " << v[i].second << endl;
    }
}       
int main()
{
    vector<pair<int,int>> v ;
    printVec(v); 

    int n;              //input size of vector
    cin >> n;

    for(int i=0;i<n;i++){   // input element pair of vectors
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    printVec(v);

    return 0;
}