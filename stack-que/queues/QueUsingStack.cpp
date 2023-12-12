#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1, s2;

public:
    void push(int val){
        s1.push(val);
    }
    
    int pop(){
        if(s1.empty() and s2.empty()){
            cout << "empty" << endl;
            return -1;
        }
        if(s2.empty())
        {
            /* code */
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int k = s2.top(); 
        s2.pop();
        return k;
    }

    bool isEmpty(){
        if(s1.empty() and s2.empty()) return 1;
        return 0;
    }

};
signed main()
{
    
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.pop();

    return 0;
}

/*
    vector<int> v{2,3,4};
    v.insert(v.end()-1,8);
    v.erase(v.begin()+1);

    auto it = find(all(v),-1);
    
    deque<int> d;
    // aagd pacahd bne jgya par push and pop thai ske
    // stack ma end thi push pop lifo
    // queues ma start insert and delet fifo

    
*/