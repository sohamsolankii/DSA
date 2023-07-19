#include<bits/stdc++.h>             //lies beside utility library
using namespace std;

void paris(){
    pair<int, float> p = {1,2};
    // p = make_pair(1,1.1);
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int,int>> pa = {1, {2,3}};
    cout << pa.first << " " << pa.second.second << " " << pa.second.first << endl;
}    

int main()
{
    paris();
    
    return 0;
}

