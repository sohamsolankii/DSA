#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int x =7;
    vector<int> v{1,2,3,1,5,6};
    int n =v.size();

    int start =0, end =0 ,current_sum =0;
    int mini =INT_MAX;

    // extend the slinding window until criteria is not met
    while(end < n){
        current_sum += v[end];
        end++;

        // then the contract slinding window until it
        // no longer meets out condition
        while(start <= end && current_sum >= x){
            current_sum  = current_sum - v[start];
            start++;

            // update minimum length if this is sorter
            // then the current min
            mini = min(mini,end-start+1);
        }

    }
    cout << mini << endl;
    
    return 0;
}