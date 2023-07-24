#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int arr[6] {1,2,2,3,3,5};

    int count = 0;
    for(int i=0;i<6;i++){
        if(arr[i] <= arr[i+1]){
            count++;
        }
    }
    if(count==6){
        cout << "array is sorted " << endl;
    }
    else{
        cout << "array is not sorted " << endl;
    }

    return 0;
}