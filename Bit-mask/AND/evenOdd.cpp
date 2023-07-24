#include<bits/stdc++.h>
using namespace std;
#define print(n) cout << n << endl

int main(){
    int n = 2;

    if(n & 1 == 0) print("even");
    else print("odd");

    if(n & 1) print("odd");     // if na bracket ma 1 hse to ander jase
}