#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> sequence = {1, 2, 3};  // Example sequence

    // Sort the sequence in ascending order
    std::sort(sequence.begin(), sequence.end());

    // Find the next permutation
    bool hasNextPermutation = std::next_permutation(sequence.begin(), sequence.end());

    if (hasNextPermutation) {
        std::cout << "Next permutation: ";
        for (const auto& num : sequence) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No more permutations." << std::endl;
    }

    return 0;
}
