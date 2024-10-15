#include <bits/stdc++.h>
using namespace std;

vector<int> segTree;

void build(vector<int>&v,int start, int end, int idx){   // build the segment tree
    // TC - O(n)
    if(start == end){
        segTree[idx] = v[start];
        return;
    }

    int mid = (start+end)/2;
    int left = 2*idx, right = 2*idx+1;

    build(v, start, mid, left);
    build(v, mid+1, end, right); // go down right side

    segTree[idx] = segTree[left] + segTree[right];
}

void update(vector<int>&v,int start, int end, int idx, int pos, int value){  // update at the given point of the segment tree
    // TC - (logn)
    if(start == end){
        v[pos] = value;
        segTree[idx] = value;
        return; 
    }

    int mid = (start+end)/2;
    if(pos <= mid)
        update(v, start, mid, 2*idx, pos, value); // left part
    else
        update(v, mid+1, end, 2*idx+1, pos, value);

    segTree[idx] = segTree[idx*2] + segTree[idx*2+1]; 
}

int query(int start, int end, int idx, int l, int r){     // give the sum L to R
    // TC - O(logn)

    // complete overlap
    // [l.....start.....end....r]
    if(start >= l and end <= r)
        return segTree[idx];

    // disjoint (no overlap)
    if(l > end || r < start)
        return 0;

    // partial overlap
    int mid = (start+end)/2;
    int leftAnswer = query(start, mid, idx*2, l, r);
    int rightAnswer = query(mid+1, end, idx*2+1, l, r);

    return leftAnswer+rightAnswer;
}
void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it : v) cin >> it;

    segTree.resize(4*n);

    build(v, 0, n-1, 1);

    // update(v, 0, n-1, 1, n-1, 9);

    for(auto it : segTree)
        cout << it << " ";

    int ans = query(0, n-1, 1, 1, 4);
    cout << endl << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

 /* 
    current = 0, left = 1, right = 2
    left = current * 2 +1 , right = current *2 + 2

    current = 1, left = 2, right = 3
    left = current * 2, right = current * 2 + 1 


    how many size tree required:
    if n is power of 2 -> 2*n-1  for 1 base indexing 2*n
    what is not pow of 2
    [1, 2, 3, 4, 5] -> [1,2,3,4,5,0,0,0]

    for given N next power of 2 will be <= 2*N
    convert N to next power of 2 ->  2 * (2*N) - 1 = 4N
*/