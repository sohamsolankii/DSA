#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Rotate the range by 2 positions
    rotate(numbers.begin(), numbers.begin() + 2, numbers.end());
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Reverse the range
    reverse(numbers.begin(), numbers.end());
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

}
