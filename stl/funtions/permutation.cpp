#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    
    std::sort(numbers.begin(), numbers.end());
    
    do {
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(numbers.begin(), numbers.end()));
    
    return 0;
}
