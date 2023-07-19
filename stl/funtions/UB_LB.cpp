#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};
    
    int target1 = 4; // try 7
    auto it1 = std::lower_bound(numbers.begin(), numbers.end(), target1);
    
    int target2 = 6;
    auto it2 = std::upper_bound(numbers.begin(), numbers.end(), target2);
    
    std::cout << "Lower bound of " << target1 << ": " << *it1 << std::endl;
    std::cout << "Upper bound of " << target2 << ": " << *it2 << std::endl;
    
    int id = distance(numbers.begin(), it1);
    std::cout << id +1;

    return 0;
}
/*
    lower_bound returns the value of the number if number is not present then give next element value
    , and upper_bound returns an iterator to the first element that is greater than the target value.
    
*/