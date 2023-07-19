#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n; // number of elements in the arrays
    cout << "Enter the number of elements: ";
    cin >> n;

    // create the arrays
    int arr1[n], arr2[n];
    cout << "Enter the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // create the vector of pairs
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
        vec.push_back(make_pair(arr1[i], arr2[i]));
    }

    // print the vector of pairs
    cout << "The vector of pairs is: ";
    for (auto p : vec) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
