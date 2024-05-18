#include<bits/stdc++.h>       // TC O(n^2)
using namespace std;

void bubble(vector<int> &v, int n){
	for(int i =0; i < n-1; i++){
		for(int j =0; j < n - i - 1; j++){                  // last element max thase atle last par jva ni req nthi
			if(v[j] > v[j+1])
				swap(v[j], v[j+1]);
		}
	}
}

void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
               swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
	vector<int> v = {2,2,4,1,9,0,7};
	int n = v.size();

	bubble(v, n);

	for(auto it : v){
		cout << it << " ";
	}

	cout << endl;
}

/*
Bubble sort -- push max at last by some swaping

*/