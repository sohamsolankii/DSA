#include<bits/stdc++.h>
using namespace std;
#define print(n) cout << n << endl

// input 5 1^2^3^4^5 = 1
int main(){
    int n = 5;

    // int xo =0;
    // for(int i=0;i<=5;i++){
    //     xo ^= i;
    // }

    if(n%4==0) print(n);
    if(n%4==1) print(1);
    if(n%4==2) print(n+1);
    if(n%4==3) print(0);
    
}

/*
    n =1    1
    n =2    3
    n =3    0
    n =4    4
     
    n =5    1
    n =6    7
    n =7    0
    n =8    8

*/