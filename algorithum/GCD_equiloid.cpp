#include<bits/stdc++.h>     // equiloid algorithum      TC -> O(log min(a,b))
using namespace std;        // when division happing number of iteration in logarithum
    
int main()
{
    int x =52,y=10;
    while(x>0 && y>0){
        if(x>y)
            x =x%y;
        else y = y%x;
    }

    if(x==0) 
        cout << y;
    else
        cout<<x;   
}


// int main(){
//     int a= 52, b=10;
//     while(b!=0){
//         int rem = a%b;
//         a = b;
//         b = rem;
//     }
//     cout << a << endl;
// }

/*
    Gcd (a,b) = gcd(a-b,b)     where a>b   apply till on becom 0
    gcd(a,b) = gcd(a%b,b)      where a>b   apply till on becom 0  grater % smaller

    ex ->
    Gcd(20,15) = gcd(5,15)
    gcd(15,5) = gcd(10,5)
    gcd(10,5) = gcd(5,5)
    gcd(0,5) = 5
*/