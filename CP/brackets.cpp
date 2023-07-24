#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
int main(){

    string s = "{{[(]}}";
    stack<char> st;

    for(auto it : s){
        if(symbols[it] < 0){
            st.push(it);
        }
        else{
            if(st.empty()){ 
                cout << "NO";
                break;
            }
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[it]!=0){
                cout << "NO";
                break;
            }
        }
    }

    if(st.empty()) cout << "YES" << endl;
}