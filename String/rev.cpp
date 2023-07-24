#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string s = {"soham solanki"};
    reverse(s.begin(),s.end());

    cout << s << endl;

    reverse(s.begin(),s.end());
    cout << s.substr(0,5) << endl;      // (position,lengeth)
    cout << s.substr(1) << endl;      

    string s2 = "Mohan";
    s+=s2;      // get append in s
    s = s+s2; // both are diffrent make copy so extra space use

    char c1[20] = "Soham";
    char c2[20] = "Solanki";

    strcat(c1,c2);      // concat kare
    cout << c1 << endl;   

    s.push_back('s');
    


    return 0;
}