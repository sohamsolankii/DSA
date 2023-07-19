#include<bits/stdc++.h>     //keeps unique element copy of every element in sorted order
using namespace std;
    
int main()
{
    set<int> s; 
    s.insert(10);       // log(n)
    s.insert(15);
    s.insert(10);
    s.insert(12);
    

    cout << s.count(10) << endl;        // ek karta vdhu element hse to j count ma add thase
    
    s.erase(15);
    cout << s.count(22) << endl;
    cout << s.count(15) << "\n";

    // for(int i :s){
    //     cout << i << " ";
    // }
    // for(auto i =s.begin();i!=s.end();i++){
    //     cout << *i << " ";
    // }

    // cout << endl;
    auto it = s.find(10);
    if(it != s.end()){
        cout << *it << endl;
    }

    return 0;
}
/*

    s.insert(x) - insert the value x into set, do nothing if already present. O(log N)
    s.erase(x) - erase the value x from set if present. O(log N)
    s.count(x) - returns 0 if x is not in set and 1 if x is in set. O(log N)
    s.clear() - erase all elements. O(n)
    s.size() - returns the current size of the set. O(1)

    [] operator does not work with set
*/ 