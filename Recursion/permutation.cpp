#include <iostream>
#include <vector>

using namespace std;

void rec(int idx, vector<int>& nums, vector<vector<int>>& ans) {
    // If our index reached nums.size(), we add nums to ans and return.
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }

    // We are traversing from idx to nums.size() and swapping the nums[i] and nums[idx].
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        rec(idx + 1, nums, ans); // Recursive call for the next index.
        swap(nums[idx], nums[i]); // Backtracking to restore the original order.
    }
}

vector<vector<int>> generatePermutations(vector<int>& nums) {
    vector<vector<int>> ans;
    rec(0, nums, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = generatePermutations(nums);

    // Displaying the permutations
    for (const vector<int>& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
