#include<bits/stdc++.h>         // TC O(n^2)
using namespace std;

void insertion_sort(int arr[],int n)  {
    for(int i=0;i<n;i++){
        int j = i;
        
        while(j > 0 && arr[j-1] > arr[j]){
            int tem = arr[j-1] ;
            arr[j-1]  = arr[j];
            arr[j] = tem;

            j--;
        }
    }

}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    //user input
    for(int i=0;i<n;i++) cin >> arr[i];

    insertion_sort(arr,n);

    // output
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
/*
Insersion sort -- take an element an place at correct place -- every one right shift by one

    9, 12, 14, 15, 6
    9, 12, 14, 6, 15
    9, 12, 6, 14, 15 

*/