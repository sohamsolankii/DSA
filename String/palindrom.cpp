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
    
int32_t main()
{
    string s;
    cin >> s;

    int left = 0;
    int right = s.size()-1;
    int count =0;

    while(left<=right){
        if(s[left] != s[right]){
            if(s[left +1]==s[right] ){
                left++;
            }
            else if(s[left]==s[right-1]){
                right--;
            }
            else{
                cout << "NO" << endl;
                break;
            }
        }
        else{
            count++;
        }
        left++;
        right--;
    }
    
    if(s.size() % 2 ==0 || s.size()/2 == count){
        cout << "YES" << endl;
    }
    else if(s.size() % 2 !=0 || s.size()/2 == count-1){
         cout << "YES" << endl;
    }
    

    return 0;
}