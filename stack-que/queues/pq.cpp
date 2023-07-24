#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    // priority que
    // priority_queue<int> pq; // max_heap
    // pq.push(1); // 1
    // pq.push(3); // 3 1
    // pq.push(2); // 3 2 1
    // pq.push(5); // 5 3 2 1
    
    // cout << pq.top() << endl;
    // cout << pq.size() << endl;
    
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    
    // min_heap
    priority_queue<int,vector<int>,greater<int>> pq; // max_heap
    pq.push(50); // 50
    pq.push(30); // 30 50
    pq.push(20); // 20 30 50
    pq.push(10); // 10 20 30 50
    
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    
    while (!pq.empty())
    {
        pq.pop();
        cout << pq.top() << " ";
    }

    return 0;
}