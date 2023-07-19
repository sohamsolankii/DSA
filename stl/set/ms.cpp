#include<bits/stdc++.h>
#include <iterator>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define st set<int>
#define pii pair<int,int
#define all(x) x.begin(), x.end()
#define pb push_back
using namespace std;
    
int main()
{
    set<int, greater<int> > s1;
    //st s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    for(auto it : s1){
        cout << it << " ";
    }
    cout << endl;
    
    // remove all elements up to 30 in s2
    s1.erase(s1.begin(), s1.find(30));
    
    // erasing method
    s1.erase(20);
    s1.erase(s1.begin(), s1.find(30));
    for(auto it : s1){
        cout << it << " ";
    }
    cout << endl;

    // kyo erase tyo eni idx mate
    int num;
    num = s1.erase(10);
    cout << num << endl;
    
    
    return 0;
}

// set jeva j hoi pan multiset ma duplicate allow hoi