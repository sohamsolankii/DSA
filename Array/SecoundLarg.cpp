#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int arr[6] {1,2,4,7,7,5};
    sort(arr,arr+6);    

    //cout << "\n" << sizeof(arr)/4 << endl;

    // brut force nlogn + n

    for(int i=5;i>1;i--){
        if(arr[i]<arr[5]){          // arr[5] largeast element in array
            cout << arr[i] <<endl;
            break;
        }
    }


    // better   O(2n)

    int larg = 0;
    for(int i=0;i<6;i++){           // find largest element
        larg = arr[5];
    }

    int small = -1;
    for(int i=0;i<6;i++){           // find secound largest by use of first
        if(arr[i]> small && arr[i]!=larg){
            small = arr[i];
        }
    }
    cout << small << endl;

    // optimal

    int a[6] {1,2,4,7,7,5};
    int large = a[0] , slarge = INT_MIN;

    for(int i=0;i<6;i++){
        if(a[i]>larg ){
            slarge = larg;
            larg = a[i];
        }
        else if(a[i] < larg && a[i] > slarge){
            slarge = a[i];
        }
    }
    cout << "secound large :" << slarge << endl;
    cout << "larger :" << larg << endl;
    
    return 0;
}

