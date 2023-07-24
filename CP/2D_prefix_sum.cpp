#include<bits/stdc++.h>
using namespace std;

const int N = 10e3+10;
int pf[N][N];

int main(){
    int arr[4][4] = {{0,0,0,0},
                    {0,3,6,9},
                    {0,8,9,2},
                    {0,3,4,1}};

    // -> without prifix sum
    // int a,b,c,d, sum =0;
    // cin >> a >> b >> c >> d;

    // for(int i = a;i<=c; i++){
    //     for(int j = b;j<=d;j++){
    //         sum += arr[i][j];
    //     }
    // }
    // cout << sum << endl;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }

    int q = 2;
    while(q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
    }

}

/*
    (a,b) ek index che matrix ni (c,d) secound index of matrix

    calucate formula
    pf[i][j] = a[i][j] + pf[i-1][j] +  pf[j][i-1] - pf[i-1][j-1]

    ans formula
    pf(c,d) - (a-1,d) - (c,b-1) + (a-1,b-1)
*/