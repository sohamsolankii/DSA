#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&v, int low, int high){
	int i = low, pivot = v[high];
	
	for(int j = low; j < high; j++){
		if(v[j] < pivot){
			swap(v[j], v[i]);
			i++;
		}
	}
	swap(v[high], v[i]);
	return i;
}

void quickSort(vector<int> &arr,int low,int high){
    if(low < high){
        int pivotIdx = partition(arr,low,high);

        quickSort(arr,low,pivotIdx-1);
        quickSort(arr,pivotIdx+1,high);
    }
}
int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " \n"[i==n-1]  ;
    }

    quickSort(arr,0,arr.size()-1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " \n"[i==n-1]  ;
    }

    return 0 ;
}

/*
    pivot & partition

    Worst	O(n^2)
    Average	O(n*log n)

    Space Complexity	O(log n)
*/