#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
using namespace std;

// with duplicate    
// void printUnion(int arr1[], int arr2[], int m, int n)
// {
// 	int i = 0, j = 0;
// 	while (i < m && j < n) {
// 		if (arr1[i] < arr2[j])
// 			cout << arr1[i++] << " ";

// 		else if (arr2[j] < arr1[i])
// 			cout << arr2[j++] << " ";

// 		else {
// 			cout << arr2[j++] << " ";
// 			i++;
// 		}
// 	}

// 	/* Print remaining elements of the larger array */
// 	while (i < m)
// 		cout << arr1[i++] << " ";

// 	while (j < n)
// 		cout << arr2[j++] << " ";
// }

// /* Driver program to test above function */
// int32_t main()
// {
// 	int arr1[] = { 1, 2, 4, 5, 6 };
// 	int arr2[] = { 2,3, 5, 7 };

// 	int m = sizeof(arr1) / sizeof(arr1[0]);
// 	int n = sizeof(arr2) / sizeof(arr2[0]);

// 	// Function calling
// 	printUnion(arr1, arr2, m, n);

// 	return 0;
// }

// -> using set also map and hash understand
// int32_t main()
// {
// 		int a[5]= {1,2,2,4,5};
//     int b[5] = {2,3,4,6,7};

//     unordered_set<int> s;

//     rep(i,0,5){
//         s.insert(a[i]);
//         s.insert(b[i]);
//     }

//     for(auto it : s){
//         cout << it << " ";
//     }
    
// 	return 0;
// }

// -> using two pointer apporch
int32_t main()
{
	int a[5] = {1,2,2,4,5};
	int b[5] = {2,3,4,6,7};

	int n1 =5, n2 =5;
	vi unionArr;
	int i=0,j=0;
	
	while(i<n1 && j<n2){
		if(a[i] <= b[j]){
			if(unionArr.size()==0 || unionArr.back() != a[i]){
				unionArr.pb(a[i]);
			}
			i++;
		}
		else{
			if(unionArr.size()==0 || unionArr.back() != b[j]){
				unionArr.pb(b[j]);
			}
			j++;
		}
	}

	while(j<n2){
		if(unionArr.size()==0 || unionArr.back() != b[j]){
				unionArr.pb(b[j]);
			}
			j++;
	}
	while(i<n1){
		if(unionArr.size()==0 || unionArr.back() != a[i]){
				unionArr.pb(a[i]);
			}
			i++;
	}

	for(auto it : unionArr){
		cout << it <<" ";
	}
}