#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int hashh[10000000];
    
int main()
{
    int n;
    cin >>n;
    int a[n];
    rep(i,0,n){
        cin >> a[i];
    }

    // precompute
    int hash[12] = {0};
    rep(i,0,n){
        hash[a[i]] +=1;
    }

    int q;
    cout << "how many number you want to check : ";
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        //fetch
        cout << "hash of given number :" << hash[number] << endl;

    }

    return 0;
}


/*
in array -- 1,2,1,3,2
        1 appier 2 time
        3 appier 1 time
        4 apper 0 time
        2 appier 2 time

output :
    5
1 3 2 1 3
how many number you want to check : 5
1
hash of given number :2
12
hash of given number :0
3
hash of given number :2
2
hash of given number :1
50
hash of given number :1969126736

int array max size = 1e6 in main
                        1e7 in globally

array of size >10 not allow

*/