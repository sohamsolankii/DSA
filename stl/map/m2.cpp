#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)   {
     for(auto &x:m){
        cout << x.first << " "  << x.second << endl;
     }
}
int main()
{
    map<int,string> m;  
        m[1] ="abc";       
        m[2] = "bcd";
        m[1] = "sos";
        m[3];
        m.insert({4,"afg"});

        auto it = m.find(4);
        cout << it->first << " " << it->second << endl;
        m.erase(3);
        print(m);
        m.clear();
       
    
    return 0;
}