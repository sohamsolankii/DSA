#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string str = "soham solanki";
    string str1 ("Soham soalnki");
    //getline(cin, str);
    int n = str.size(),n1 = str.length();
    cout << n +n1 << endl;
    
    str.push_back('s');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;
    
    str.resize(3);
    cout << str << endl;

    cout << str.size() << endl;
    cout << str[2] << endl;

    // int to string
    int num =520;
    cout << num << endl;
    cout << to_string(num) << endl;


    return 0;
    
}

/*
    string is class // string variable is object
    dynamic memory allowcation
    no pre allowcated memory
    no of in built functions
    
*/