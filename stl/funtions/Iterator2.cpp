#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> v = {10,20,30,40};
    
    for(auto it = v.begin();it!=v.end();it++){
        cout << *it << " " ;
    }
    cout << endl;


    // Pair case mate
    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};

    // for(auto ip = vp.begin();ip!=vp.end();ip++){
    //     cout << (*ip).first << " " << (*ip).second <<endl;
    // }
    for(auto ip = vp.begin();ip!=vp.end();ip++){
        cout << ip->first << " " << ip->second <<endl;
    }
    
    
    return 0;
}

/*
it++ -> next iterator par lai jay
it+1 -> next location par lai jay

vector continue memory loction hoi atle farak na pade pan map ane set ma problem aave

(*ip).first == ip->first
*/