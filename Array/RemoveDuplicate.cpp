#include<bits/stdc++.h>
using namespace std;
    
int64_t main()
{
    int arr[6] {1,2,2,7,7,5};
    sort(arr,arr+6);  

    // brute force make a set / map

    // two pointer approch
    int i =0;
    for(int j=1;j<6;j++){
        if(arr[i] != arr[j] ){
            arr[i+1] = arr[j];
            i++;
        }
    }

    for(int k=0;k<i+1;k++){
        cout << arr[k] << " ";
    }

    
    return 0;
}