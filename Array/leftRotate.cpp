#include<bits/stdc++.h>     //Tc O(n)
using namespace std;
#define rep(i,a,n)  for( int i = a; i < n; i++)


    
int main()
{
    int arr[6] {1,2,3,4,5,6};

    int tem = arr[0];
    for(int i=1;i<6;i++){
        arr[i-1] = arr[i];
    
    }
    arr[5]= tem;

    for(int i=0;i<6;i++){
        cout << arr[i] << " " ;
    }
    
    
    return 0;
}