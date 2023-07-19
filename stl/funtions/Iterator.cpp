#include<bits/stdc++.h>     // iterator behave like pointers
using namespace std;
    
int main()
{
    vector<int> v = {10,15,20,30};
    //vector<int>::iterator it = v.begin();
    //or
    auto it = v.begin();
    cout << *it;  // 10
    it++;
    cout << *it;  // 15

    cout << *(it+2); //30  -- 15+2 location
    
    
    return 0;
}

// v.end iterator to non exist element (after the last element)