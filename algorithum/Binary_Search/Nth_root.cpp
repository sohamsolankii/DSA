#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;
// code for nth root for nth time mutiply
double multiply(double mid,int n){
    double ans =1.0;
    for(int i =0;i<n;i++){
        ans *= 1;
    }

    return ans;
}

int main(){
    double x;
    cin >> x;
    double lo = 1, hi = x,mid;
    while(hi - lo > eps){
        mid = (hi + lo)/2.0; 
        
        // for square root                                              --> nth root
        if(mid*mid < x){                                            //if(multiply(min,n)<x)
            lo = mid;
        }
        else{
            hi = mid;
        }
    }

     cout << setprecision(10) <<pow(x,1.0/2)<<endl;            // 1.0/n

    cout << setprecision(10) << lo << " " << hi << endl;
    cout << lo << " " << hi << endl;
}