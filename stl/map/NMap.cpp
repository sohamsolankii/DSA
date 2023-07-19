#include<bits/stdc++.h>     // map always store in shorted form
using namespace std;        // unordere map ma sort na hoi
    
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    map<int,int> mpp;           //aslo do in first for loop
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //iterate in map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >>q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << "map of number is:"<<mpp[number] << endl;
    }
    
    return 0;
}

/*
    map < key,  value>
         number,frequency

    TC = (log N)   in storing and fetching

    in order key is anything like- pair 
    but in unorder key is individual data type
*/