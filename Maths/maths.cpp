#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'


// kth number sudhi na prime medava 
vector<ll> sieve(int n){
    vector<ll> ans;
    vector<bool> v(n + 1, 1);
    for (int i = 2; i <= n; i++){
        if (v[i]){
            ans.push_back(i);
            for (int j = i * i; j <= n; j = j + i)
                v[j] = 0;
        }
    }
    return ans;
}
// ab c ma bc mate -1 mod
int modPow(int base, int exp, int mod) {
    int answer = 1;
    while (exp != 0) {
	if (exp & 1) { // if i-th bit is one multiply
	    answer = (answer * base) % mod;
	}
	base = (base * base) % mod; // increase at each iteration
	exp = exp >> 1; //bitwise right shift
    }
    return answer;
}

// 2^3 then value 2 freq 3
map<ll, ll> primeFactorization(int n){
    map<ll, ll> mp;
    if (n <= 1) return mp;
    while (n % 2 == 0){
        mp[2]++;
        n /= 2;
    }
    while (n % 3 == 0){
        mp[3]++;
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6){
        while (n % i == 0){
            mp[i]++;
            n /= i;
        }
        while (n % (i + 2) == 0){
            mp[i + 2]++;
            n /= (i + 2);
        }
    }
    if (n > 3) mp[n]++;
    return mp;
}

// a and b are said to be congruent to each other under mosulo n, if they leave same remainder when divide by n
// 13 === 41 (mod 7)
int findCongruentNumber(int number) {
    int congruentNumber = number % 10;
    return congruentNumber;
}

string printBinary(int x){
    return bitset<16>(x).to_string();
}

int mex(vector<int> v){
    set<int> mexx(v.begin(),v.end());
    int n = v.size(), mex =0;

    for(int i = 0;i<=n;i++){
        if(mexx.find(i)==mexx.end()){
            mex = i; break;
        }
    }
    return mex;
}

int main()
{
    ios_base::sync_with_stdio(false);

    vector<ll> v = sieve(10);
    string s = printBinary(8);cout << s << endl;
    string jj = printBinary((8|(1<<6)));
    cout << s << endl;

    return 0;
}

/*
    int n = __builtin_popcount(16); // if(n==1) then number is power of two
*/