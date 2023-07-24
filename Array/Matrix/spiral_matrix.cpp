#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
    int n = v.size();
    int m = v[0].size();

    vector<int> ans;
    int top =0, right =m-1;
    int left =0, bottom =n-1;

    while(top <= bottom && left <= right){

        // For moving left to right
        for(int i = left;i<=right;i++){
            ans.push_back(v[top][i]);
        }
        top++;

        // For moving top to bottom.
        for(int i = top; i <= bottom; i++){
            ans.push_back(v[i][right]);
        }
        right--;

        // For moving right to left.
        if (top <= bottom) {
            for(int i = right; i >= left; i--){
                ans.push_back(v[bottom][i]);
            }
            bottom--;
        }

        // For moving bottom to top.
        if(left <= right){
            for(int i= bottom;i>=top;i--){
                ans.push_back(v[i][left]);
            }
            left++;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
/*
    left/right indecates column
    top/bottom indecates raw

    we go in top -> right -> bottom -> left
*/