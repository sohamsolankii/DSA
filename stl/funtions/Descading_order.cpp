#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = { 1, 5, 2, 4, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}