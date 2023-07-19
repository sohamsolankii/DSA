#include <bits/stdc++.h>
using namespace std;
int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    int target = 6;
    bool found = binary_search(numbers.begin(),numbers.end(),target);

    cout << found << endl;
}