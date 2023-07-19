#include<bits/stdc++.h> // TC O(n^2)
using namespace std;

void selection_sort(int arr[],int n) {
    // outer loop go to the secound last element bcz last auto sorted after second last
    for(int i=0;i< n-1;i++){
        int mini =i;    // azzume - i index is small
        // inner loop go after sorted small
        for(int j = i;j<=n-1;j++){
           if(arr[j] < arr[mini]) {                     // arr[mini] thi element aavse only mini index aavse
            mini = j;
           }
        }
        //swap
        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i]= temp;  
        
    }
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    //user input
    for(int i=0;i<n;i++) cin >> arr[i];

    selection_sort(arr,n);

    // output
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
/*
selection sort = select minimum and swap -> take minimum at front
    5, 4, 3, 2, 1 array

    1, 4, 3, 2, 5 step -1
    1, 2, 3, 4, 5 step -2

    6 element array took 5 step to sort

    in array last index is n-1 bcz array start with 0

*/