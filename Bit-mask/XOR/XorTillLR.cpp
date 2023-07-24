#include<bits/stdc++.h>
using namespace std;
#define print(n) cout << n << endl

// 3 to 6 vache na xor
int main(){
    int l = 3,r = 6;
    int n = (r+1)^(l+1);        // xor(R)^xor(L-1) baki n vadi pattern

    cout << n << endl;
}