#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string s;
    cin >>s;

    unordered_map<char,int> mpp;        // order and unordere both work
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << "input character you want to know:"<<mpp[c] << endl;
    }
    
    return 0;
}