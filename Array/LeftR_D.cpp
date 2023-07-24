#include<bits/stdc++.h>     // d = d % n brute force
using namespace std;
    
int main()
{
    int n = 7;
    int arr[n] {1,2,3,4,5,6,7};
    int d =3;                       // 7 ro = whole array  8 = 7+1  15 = 7 + 7 + 1
    d = d%n;
    
    // peli loop ek temp arr d size
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }

    // second loop element aagd kayra
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
  
    // third loopp temp na ele proper jgya par muyka
    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];         // j=1 lai ne pan kari skay
        
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}   
