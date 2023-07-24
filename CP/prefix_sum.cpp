#include<bits/stdc++.h> // ek left aaypu hoi ek right aaypu hoii bane na middle element no sum find karva prefix use
using namespace std;

const int N = 10e7;
int pf[N];

int main(){
    int arr[6] = {3,6,2,8,9,2};
    int n = 7;

    for(int i=1;i<n;i++){
        pf[i] = pf[i-1] + arr[i-1];
    }
    
    int q= 3;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << pf[r]-pf[l-1] << endl;
    }
        
}

/*
    prifix sum of array = 3,9,11,19,28,30
    so aana help thi koi pan array no left to right part no sum find kari sakay

*/