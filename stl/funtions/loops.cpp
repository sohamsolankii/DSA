#include<bits/stdc++.h>
using namespace std;
    
int main()
{   
    // vector   -- two rete access thy iterator ane index thi
    vector<int> v = {5,4,3,2,1};

    sort(v.begin(),v.end());    

    for(int x:v){
        cout << x << " ";    // range base loop -- copy aave & muki ne referance aapi sakay
    }

    for(int i=0;i<v.size();i++){
        cout << v[i]<< " ";       // by index
    }

    for(auto it = v.begin();it!=v.end();it++){
        cout << *it << " " ;        // call iterator
    }

    // string is same as vectors
    
    return 0;
}


