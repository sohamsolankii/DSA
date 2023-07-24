#include<bits/stdc++.h>         // function call it self 
using namespace std;

int f(int n){
    // base case
    if(n==1) return 1;

    // int ans = n*f(n-1);
    // return ans;

    // easy way
    return n*f(n-1);
}

int main(){
    int n =4;
    int ff =f(n);

    cout << ff << endl;
}

// there are two functions
// recurance relation -> methamatical term ne recursion ma lkhvu
// stack frame ma work thase 