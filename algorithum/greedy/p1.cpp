// Q: You are given two arrays A and B of size n. Both arrays contain distinct elements, but their elements are in different orders. Your task is to find the minimum number of swaps needed to convert array A into array B by only swapping elements in A.

/* 
    solution:
    Treat the problem as a cycle decomposition in a permutation.
    Every cycle of size k requires k - 1 swaps to sort.
    If an element is already in its correct position (a self-loop), no swap is needed.

*/

#include<bits/stdc++.h>
using namespace std;

int minSwapsToMakeSimilar(vector<int>& A, vector<int>& B) {
    int n = A.size();
    
    // Map value to index in B
    unordered_map<int, int> posInB;
    for (int i = 0; i < n; ++i) {
        posInB[B[i]] = i;
    }

    // Create a permutation where A[i] should go to posInB[A[i]]
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        perm[i] = posInB[A[i]];
    }

    // Count cycles in permutation
    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int cycleSize = 0;
            int j = i;
            // Traverse the cycle
            while (!visited[j]) {
                visited[j] = true;
                j = perm[j];
                ++cycleSize;
            }
            if (cycleSize > 1) {
                swaps += cycleSize - 1;
            }
        }
    }

    return swaps;
}
