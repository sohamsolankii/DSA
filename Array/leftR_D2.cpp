#include<bits/stdc++.h> //optimal
using namespace std;
    
int main()
{
    int n =7;
    int arr[7] {1,2,3,4,5,6,7};
    int d = 3;
    
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }

    // when not reverse function
    // while(start << end){
    //     int temp  = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     endl--;
    // }


    return 0;
}