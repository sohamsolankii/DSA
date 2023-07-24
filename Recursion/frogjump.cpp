#include<bits/stdc++.h>
using namespace std;

int f(int *h,int i,int n){  // pointer pass kyro che
    if(i == n-1) return 0;
    if(i == n-2) return f(h, i+1, n) + abs(h[i] - h[i+1]);

    return min(f(h,i+1,n) + abs(h[i]-h[i+1]),f(h, i+2, n) + abs(h[i]-h[i+2]));
}
    
int main()
{    
   int arr[] = {10,30,40,20};

   cout << f(arr,0,4) <<endl; 


    return 0;
}