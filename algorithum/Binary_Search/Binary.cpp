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
    
int32_t main()          // TC O(logN)
{
    int arr[7]={1,2,3,4,5,6,7};     
    int key= 4;

    int start=0,end = 6;
    int ans =0;
    while (start<=end){                                                   // (end - start > 1)
            int mid=(start-end)/2 + end;          

            if(arr[mid] == key){   //found
                ans = mid;
             
            }
            if(arr[mid]<key){      //Right
                start = mid+1;
            }
            else{                   //Left
                end=mid-1;
            }
    }

    if(ans >0){
        cout << "index of key:" << ans << endl;
    }
    else{
        cout << "key not found"<< endl;
    }

    // cout << binary_search(arr,arr+7,4);

    return 0;
}

// monotonic function -> which maintain a given order
// predicate function -> always return true or false f f f f f t t t 



