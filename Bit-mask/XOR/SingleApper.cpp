#include<bits/stdc++.h>
using namespace std;

// which number apper only one
int main(){
    int arr[5] = {2,3,5,2,3};

    int ans = 0;

    for(int i=0;i<5;i++){
        if(i!=5){
            ans ^= arr[i] ;
        }
    }

    cout << ans << endl;
    return 0;
}

/*  sme hoi to xor = 0 even no xor 
    diffrent ma xor = 1 odd no xor

    0 ^ 1 = 1
    0 ^ 0 = 0
    1 ^ 1 = 1

*/