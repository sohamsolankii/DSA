#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> v;
    vector<int> v(10);  // vector int 10 elements all of them 0
    vector<char> v(10,'h'); // vector with string all 'h'

    vector<int> v[50];  // this is array of 50 vectors

    v.push_back(12);
    v.pop_back();
    v.clear();
    v.size();  

    v[0];  // access vector element

    // sorting of vector
    vector<int> v{5,4,3,2,1};
    sort(v.begin(),v.end());
    for(int x:v){
        cout << x<< " ";
        
    }
    
    return 0;
}