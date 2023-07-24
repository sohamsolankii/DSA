#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

// int main(){
//     vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
//     int n= v.size();
//     int m= v[0].size();

//     vector<vector<int>> vi(n, vector<int> (n, 0));
//     rep(i,0,n){
//         rep(j,0,m){
//             vi[j][n-1-i] = v[i][j];
//         }      
//     }

//     for(auto it : vi){
//         for(auto el : it){
//             cout << el << " ";
//         }
//         cout << "\n";
//     }

// }

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n= v.size();
    int m= v[0].size();

    // transposing the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // reversing each row of the matrix
    for(int i=0;i<n;i++){
            reverse(v[i].begin(),v[i].end());
    }

    for(auto it : v){
        for(auto el : it){
            cout << el << " ";
        }
        cout << "\n";
    }
}