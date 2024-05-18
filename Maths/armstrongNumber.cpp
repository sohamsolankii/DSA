#include<bits/stdc++.h>     // if 371 = 3^3 + 7^3+ 1^3 = 371
using namespace std;

#define numlength(n) count(v.begin(),v.end(),n);
    
int main()
{
    int n;
    cin >> n;

    int sum = 0,dup = n;
    while(n>0){
        int last = n%10;
        sum = sum + last*last*last;
        n= n/10;
    }
    if(dup == sum){
        cout << "the number is armstrong "<<endl;
    }
    else{
        cout << "false";
    }
    
    return 0;
}