#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int a[] = {2,1,4,3};
    vector<int> v = {2,1,4,3};

    cout << *min_element(a,a+4) << endl;
    cout << *max_element(v.begin(),v.end()) << endl;

    // bdha element ne plus kare
    cout << accumulate(a,a+4,0) << endl;
    cout << accumulate(v.begin(),v.end(),0) << endl;

    // element che ke nai check karva by 1&0
    cout << count(a,a+4,4) << endl;
    cout << count(v.begin(),v.end(),5) << endl;
    
    return 0;
}