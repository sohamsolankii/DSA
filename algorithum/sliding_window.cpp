#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> v = {-2,10,1,2,3,-1,4,5};
    int n =v.size();
    int k =3;                                   // how much want to find

    int sum =0, ans =INT16_MAX;
    for(int i=0;i<k;i++){
        sum +=v[i];
    }

    cout << sum << " ";
    ans = min(ans,sum);

    // slinding window teq
    for(int i=1;i<n-k+1;i++){
        sum -= v[i-1];
        sum += v[i+k-1];

        ans =min(ans,sum);
        cout << sum << " ";
    }

    cout << endl;
    cout << ans << endl;
    

    return 0;
}

// yoy want to slide full array and want to 3-3 element sum 