#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

bool isPossible(vector<int> v, int n, int m, int mid){

    int pagesum =0;
    int studentcount =1;

    for(int i=0; i<n; i++){
        if(pagesum + v[i] <= mid){
            pagesum += v[i];
        }
        else{
            studentcount++;
            if(studentcount > m){
                return false;
            }

            pagesum =0;
            pagesum = v[i];
        }
        // if(studentcount > m) {
        //     return false;
        // }
    }
    return true;

} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    vector<int> v = {10,20,30,40};

    int n =4; // array ni size
    int m =2; // studet ke jema divide karva ni che book

    int s =0, e =100;
    int ans =0;

    while(s<=e){
        int mid = (s+e)/2;

        if(isPossible(v,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }    
 
    cout << ans << endl;

    return 0;
}

