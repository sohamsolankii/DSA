#include<bits/stdc++.h>     // TC = O(min(x,y))     -- brut force mthod
using namespace std;
    
int main()
{
    int x=20,y=40;
    // for(int i=min(x,y);i>=1;i--){
    //     if(x==y){
    //         cout << x << endl;
    //         break;
    //     }
    //     if(x%i==0 && y%i==0){
    //         cout << i << endl;
    //         break;
    //     }
    // }
    int gcd = __gcd(36,60);
    cout << gcd << endl;
    
    return 0;
}

/*
Example :
    (GCD)greatest common divisor  -- (HCF)higest comman factor

    n1 = 9 so factor == 1,3,9
    n2 = 12 so factor == 1,2,3,4,6,12
    GCD = 3 

    n1 = 36 so factor == 2,2,3,3
    n2 = 60 so factor == 2,2,3,5
    GCD = HCF = 2*2*3 = 12 
    

    gcd/hcf same and lcm different

    LCM - lcm of 3 and 4 is 12 because 12 is the smallest number that is divisible by both 3 and 4.


*/