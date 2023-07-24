#include<bits/stdc++.h>   // move zero at last
using namespace std;
    
int main()
{
    int arr[6] {1,2,0,7,0,5};
    int n =6;

    // 0th index ne map karva
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    // 0th index aagd thi non 0 sathe swap
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}