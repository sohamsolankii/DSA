#include<bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, char from, char helper, char to) {

	// cout << n << " " << from << " " << helper << " " << to << '\n';
	if (n == 0) return;

	TowerOfHanoi(n - 1, from, to, helper);
	// reached here
	// nth rod to to
	cout << from << " -> " << to << '\n';

	TowerOfHanoi(n - 1, helper, from, to);

}

int main()
{
	int n;
	cin >> n;

	TowerOfHanoi(n, 'A', 'B', 'C');


	return 0;
}