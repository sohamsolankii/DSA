#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    deque<int> d;
    d.push_back(10); // 10
    d.push_front(20); // 20,10
    d.push_back(30); // 20,10,30

    while(!d.empty()){
        cout << d.front() << " ";
        d.pop_front();
    }
      


    return 0;
}