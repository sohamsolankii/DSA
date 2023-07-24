// method ->1 check by map                  heart = earth
 
// #include<bits/stdc++.h>     //letter nu rearrangement so count are sme
// using namespace std;
// #define fl(i,a,b) for(int i=a ; i<b ; i++)

// int main()
// {
//     string s = "ghbok";
//     string s1 = "kobhg";

//     map<char,int> mp;
//     fl(i,0,5){
//         mp[s[i]]++;
//         mp[s1[i]]++;
//     }    

//     int count = 0;
//     fl(i,0,5){
//         if(mp[s[i]] == mp[s1[i]]){
//             count++;
//         }
//     }

//     if(count==5){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
    
//     return 0;
// }


// method -> 2 Either way sort both and check both are sme or not

// method -> by vector like array ek ni index hse to +1 bina ma pan hse to -1 at last if 0 to anagram use hasing

#include<bits/stdc++.h>
using namespace std;

bool Anagram(string s1,string s2){

    //creat freq array
    vector<int> freq(26,0);

    if(s1.length()!=s2.length()){
        return false;
    }
    else{
        // store frequence of character
        for(int i=0;i<s1.length();i++){
            freq[s1[i]]++;
            freq[s2[i]]--;
        }

        for(int i=0;i<s1.length();i++){
            if(freq[i]!=0){         // not anagram
                return false;
            }
        }
    }

    return true;

}    
int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    if(Anagram(s1,s2)){
        cout << "string are anagram\n";
    }
    else{
        cout << "String are not anagram" << endl;
    }
    
    return 0;
}