#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    pair<int,string> p= {1,"abs"};

    pair<int,string> p1= p;                 // go by copy
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl<<endl;

    pair<int,string> &p2= p;                 // go by referance
    p2.first = 3;
    cout << p.first << " " << p.second << endl;
    cout << p2.first << " " << p2.second << endl;
    
    return 0;
}