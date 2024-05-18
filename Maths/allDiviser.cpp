// #include<bits/stdc++.h> //36 -> 1,2,3,4,6,9,12,18,36    TC = O(n)
// using namespace std;
    
// int main()
// {
// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         cout << i << " ";
//     }
// }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin >>n;
    vector<int> v;

    for(int i=1;i<=sqrt(n);i++){                // either i*i<=n -> 6*6 <=36 / 7*7<= 36 false
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }     
    }

    sort(v.begin(),v.end());
    for(int x:v){
        cout << x << " ";
    }
    
    return 0;
}