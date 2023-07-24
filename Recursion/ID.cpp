#include<bits/stdc++.h>
using namespace std;

void decreasing(int n){
    if(n==0) return;

    // toward to the base case
    cout << n << ",";
    decreasing(n-1);
}  

void increasing(int n){
    if(n==0) return;

    increasing(n-1);
    cout << n << ",";
}  

int main()
{
    int n = 5;    

    decreasing(n);
    cout << endl;
    increasing(n);

    return 0;
}