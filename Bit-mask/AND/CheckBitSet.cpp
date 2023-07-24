#include<bits/stdc++.h>
using namespace std;
#define print(n) cout << n << endl

int main(){
    int n = 4, i = 2;
    int mask = 1 << i;

    cout << ((mask & n) ? "YES" : "NO") << endl;   

    // int a = 10 >> 3;         right sift by three
    // print(a);

}
// n =13 (1,1,0,1) i = 2 yes, i = 1 no
// like if index bit is 1 so yes else no