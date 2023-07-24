#include<bits/stdc++.h>
using namespace std;

void f(int n) {
    if(n > 0){
        f(n-1);
        cout << n << " ";
    }
}   
int main()
{
    int n;
    cin >> n;
    f(n);
    
    return 0;
} 

/*

    jonral methos to solve recursion

    first make a funtion
    write base case -> after that recursion is over

    assumtion ->> break into small part and take first part and write code for it and assume 
    that for other smaller part we have already answer (recurrance relation like fibonaci)

    main thing small part ma break kari code ma pachu function nu name and eni bdhi values 
    aave yad rakhvu

*/
/*

    void funtion hoi and base case ma return karvu hoi to only return; aavse
    pn jo void funtion na hoi and base case ma return krvu hoi return (value) aave
*/