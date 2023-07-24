// #include<bits/stdc++.h>     // 1,2,4,5 == 3 is missing
// using namespace std;
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define vi vector<int>
    
// int main()
// {
//    vi v = {1,2,4,5};
//    int n =5;        // last element

//    int xor1=0, xor2=0;
//    rep(i,0,n-1){
//      xor2 = xor2 ^ v[i];
//      xor1 = xor1 ^ (i+1);


//    }
//    xor1 = xor1^n;

//    //cout << xor1 ^ xor2 ;
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
    
int main()
{
    vi v = {1,2,3,5};
    int n = 5;  // take last element

    int sum = n*(n+1)/2;
    int ans = 0;
    rep(i,0,n-1){
        ans += v[i];
    }

    cout << "missing element : "<<sum - ans << endl;
    
    return 0;
}