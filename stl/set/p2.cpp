#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    set<int> s= {100,20,30};
    // (s+5) or s+=2 not work

    cout << *s.begin() << endl; // sorted form ma store kare
    s.erase(s.begin());

    cout << *s.begin();
    set<int>::iterator lower = s.lower_bound(25);
    cout << "Lower Bound: " << *lower << endl;    
    
    
    return 0;
}

/*

s.find(x): returns iterator to element with value x. Returns s.end() if not found. O(logN)
s.lower_bound(x): returns iterator to the first element which is >= x. Returns s.end() if not found. O(logN)
s.upper_bound(x): returns iterator to the first element which is > x. Returns s.end() if not found. O(logN)
s.erase(it): erases the element with iterator it. O(logN)

--> both are sme
if(s.find(10) == s.end()) cout << “Not Found”;
if(s.count(10) == 0) cout << “Not Found”;

*/