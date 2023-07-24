#include<bits/stdc++.h>
using namespace std;
    
void f(stack<int> &st,stack<int> &result){
    if(st.empty()) return;
    int curr = st.top();
    st.pop();
    f(st,result);
    result.push(curr);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    stack<int> result;
    f(st,result);
    while (not result.empty()){              
        int curr = result.top();
        result.pop();
        cout << curr << endl;
    }  
   
    return 0;
}