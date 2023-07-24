#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {4,5,2,25,7,8};
    vector<int> nge(v.size());

    // we make stack of index
    stack<int> st;

    for(int i=0;i<v.size();i++){
        while (!st.empty() && v[i]>v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    
    for(int i=0; i<v.size() ;i++){
        cout << v[i] << " " << (nge[i]== -1 ? -1 : v[nge[i]]) << endl;
    }

}