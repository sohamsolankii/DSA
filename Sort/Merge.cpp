#include <bits/stdc++.h>    
using namespace std;        

void conquer(vector<int> &v, int low, int mid, int high) {
    // [low...mid]
    // [mid+1..high]
    vector<int> tmp; // temporary array
    int left = low;      // starting index of left half of v
    int right = mid + 1;   // starting index of right half of v

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (v[left] <= v[right]) 
            tmp.push_back(v[left++]);
        else 
            tmp.push_back(v[right++]);
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        tmp.push_back(v[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        tmp.push_back(v[right]);
        right++;
    }

    // transfering all elements from temporary to v //
    for (int i = low; i <= high; i++) {
        v[i] = tmp[i - low];
    }
}

void divide(vector<int> &v, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2 ;

    divide(v, low, mid);  // left half
    divide(v, mid + 1, high); // right half

    conquer(v, low, mid, high);  // merging sorted halves
}

int main() {

    vector<int> v = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " \n"[i==n-1]  ;
    }

    divide(v, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " \n"[i==n-1]  ;
    }

    return 0 ;
}
/*
Merg short -- Devide and conquer (merge)
TC O(n.logn) divide logn and conqure n ma
Space Complexity	O(n)


*/