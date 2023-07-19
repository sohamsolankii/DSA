#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
using namespace std;
    
// to find maximum sub array sum    
int32_t main()
{
     vi v = {-2,-3,4,-1,-2,1,5,-3};      // ans = 7 
    //vi v = {-4,-2,-1};
    int curSum =0 , maxi = INT_MIN;

    rep(i,0,v.size()){
        curSum += v[i];

        // Taking the max of maxSum and the curSum of the subarray
        maxi = max(maxi,curSum);

        // Checking if the curSum becomes negative
        if(curSum < 0)
            curSum = 0;
        
    }

    cout << maxi << endl;


    return 0;
}