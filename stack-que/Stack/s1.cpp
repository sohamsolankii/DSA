#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    // cout << st.top() << endl;
    // cout << st.empty() << endl;

    stack<int> s;                        // stack print in reverse order so we first make new satck and store in it
    while (not st.empty()){
       s.push(st.top());
       st.pop();
    }
    while (not s.empty()){              // after we print new stack
        cout <<  s.top() << endl;
        s.pop();
    }
        
    return 0;
}