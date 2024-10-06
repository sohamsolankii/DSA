#include <bits/stdc++.h>
using namespace std;

int main() {

    // example - 1
    string input = "123 45.67 hello";
    istringstream iss(input); // Create an istringstream object

    int num;
    double decimal;
    string word;

    // Extract values from the string
    iss >> num >> decimal >> word;

    cout << "Integer: " << num << ", Double: " << decimal << ", String: " << word << endl;

    // example - 2
    string numbers = "10 20 30 40 50"; 
    istringstream iss(numbers);       

    vector<int> vec;                   
    int num;

    while (iss >> num) {
        vec.push_back(num);
    }

    for (int n : vec) {
        cout << n << " ";
    }

    return 0;
}
