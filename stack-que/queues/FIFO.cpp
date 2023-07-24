#include<bits/stdc++.h>
using namespace std;
int main(){
    
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("acv");

    cout << q.front() << " "<< q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;
    
    while(!q.empty()){
        cout << q.front() << " ";       
        q.pop();
    }
}