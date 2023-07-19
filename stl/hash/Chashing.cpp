// #include<bits/stdc++.h>     // ascii uc = 65 , lc = 97 = 'a' , 'z' = 122  small letter and size 
// using namespace std;
    
// int main()
// {
//     string s;
//     cin >> s;

//     //pre compute
//     int hash[26] {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;                    // uppar case mate s[i] - 'A'
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         //fetch
//         cout << hash[c-'a'] << endl;
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>     // capital-small leter both but size bigger
using namespace std;
    
int main()
{
    string s;
    cin >> s;

    // pre compute
    int hash[256] {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        // fetch
        cout << "hash of the character: "<< hash[c] << endl;

    }
    
    return 0;
}