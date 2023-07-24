#include <iostream>

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int n = 16; // Binary: 10000
    bool isPower = isPowerOfTwo(n);
    if (isPower) {
        std::cout << n << " is a power of two." << std::endl;
    } else {
        std::cout << n << " is not a power of two." << std::endl;
    }
    return 0;
}
