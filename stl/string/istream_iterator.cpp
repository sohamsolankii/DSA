#include <bits/stdc++.h>
using namespace std;

int main() {

    // example - 1
    string data = "5 10 15 20 25";  
    istringstream iss(data);        

    // Use istream_iterator to extract integers
    istream_iterator<int> start(iss), end;
    vector<int> numbers(start, end); // Store the integers in a vector

    cout << "Extracted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    } cout << endl;
    

    // example - 2
    string s1 = "hi there my self soham how are you";

    istringstream iss1(s1);

    vector<string> v((istream_iterator<string>(iss1)),istream_iterator<string>());

    for(auto it : v){
        cout << it << endl;
    }
        

    return 0;
}
