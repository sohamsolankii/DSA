#include<bits/stdc++.h>         // TC O(n^2)
using namespace std;
    
void bubble_sort(int n,int arr[]) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){           // last element max thase atle last par jva ni req nthi
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }
        }
    }

}
int main()
{
    int n;
    cin >>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubble_sort(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    
    return 0;
}
/*
Bubble sort -- push max at last by some swaping

*/