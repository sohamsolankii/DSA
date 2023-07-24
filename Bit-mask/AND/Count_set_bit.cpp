// #include <iostream>
// using namespace std;
// int countSetBits(int n) {
//     int count = 0;
//     while (n){
//         count++;
//         n = n & (n - 1);
//     }
//     return count;
// }

// int method2(int n){
//     int count =0;
//     while(n){
//         if(n & 1) count++;
//         n >>= 1;
//     }
//     return count;
// }

// int main() {
//     int n = 154; // Binary: 10011010
//     int setBits = method2(n);
//     cout << "Number of set bits in " << n << " is " << setBits << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int num = 42;  // Binary: 101010
    int count = __builtin_popcount(num);
    cout << "Number of set bits: " << count << endl;
    return 0;
}
