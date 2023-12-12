#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int N;
    queue<int> q1,q2;

    Stack(){
        N = 0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while (!q1.empty())
        {
           q2.push(q1.front());
           q1.pop();
        }
        
        queue<int> tmp;
        tmp = q1;
        q1 = q2;
        q2 = tmp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }
};
signed main()
{
    
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;

    
    return 0;
}