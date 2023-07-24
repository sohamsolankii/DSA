#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
using namespace std;

// using map aldo brut force iterate to the array   
// int32_t main()
// {
//     int arr[5] = {2,6,5,8,11};
//     int target = 14;

//     map<int,int> mpp;
//     int n = 5;

//     rep(i,0,n){
//         int first = arr[i];
//         int secound = target - first;
//         if(mpp.find(secound) != mpp.end()){
//             cout << "YES" << endl;
//         }
//         mpp[first] = i;
//     }   
//     return 0;
// }

// 2 pointer 
int32_t main()
{
    int arr[5] = {2,6,5,8,11};
    int target = 14;
    int n = 5;

    int left =0,right= n-1;
    bool tar {false};

    sort(arr,arr+5);
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            tar = true;
            break;
        }
        else if (sum < target) left++;
        else right--;
        
    }
    
    if(tar){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}