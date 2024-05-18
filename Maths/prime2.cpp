#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin >> n;

    int cou =0;
    for(int i=2;i*i<=n;i++){      
        if(n%i==0){
            cou++;
            if((n/i!=i))cou++;
        }     
    }
    if(cou ==2){
        cout << "prime number." ;
    }
    else{
        cout << "not a prime number.";
    }
    
    return 0;
}