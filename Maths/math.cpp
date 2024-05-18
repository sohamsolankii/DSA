#include<bits/stdc++.h>
using namespace std;

// int power(int a,int b){
//     if(b==0) return 1;
//     int x = power(a,b/2);

//     if(b%2==0) return x*x;
//     else x*x*a;
// }

// b>>1 = b = floor(b/2) dar ek vakhte ek bit nikdi jase
int power(int a, int b){
    int ans =1;

    while(b>0){
        if(b%2==1) ans *= a;
        b >>= 1;
        a *= a;
    }
    return ans;
}
// but we can also do by pow function

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second > b.second);
}


//given a,b,c solve x,y ax+by = c = g   --> euclidean  algo
// where g= gcd(a,b)
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

// number binary-prime-even/odd-index 
// -> sieve
bool isPrime(int n){
    if(n==1) return false;

    for(int i=2;i*i<=n;i++){      
        if(n%i==0){
            return false;
        }     
    }
    return true;
}

void print_factors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << endl;
            if(i!=n/i)
                cout << n/i << endl;
        }
    }
}

int main(){
    // int a = 35;
    // int b = 15;
    // int x, y;

    // int gcd = gcdExtended(a, b, &x, &y);

    // std::cout << "GCD(" << a << ", " << b << ") = " << gcd << std::endl;
    // std::cout << "Coefficients x and y: " << x << ", " << y << std::endl;
    print_factors(12);
}




struct matrix {
    int mat [2] [2];
};
matrix identity () {
    matrix A;
    A.mat [0] [0] = 1,A.mat [1] [1] = 1;
    A.mat [0] [1] = 0,  A. mat [1] [0] = 0;
    return A;
}
matrix mul (matrix A, matrix B) {
    matrix C;
    for(int row = 0; row < 2; row++) {
        for(int col = 0; col < 2; col++) {
            int here = 0;
            for(int i = 0; i < 2; i++) {
                here += A.mat [row][i] * B.mat [1][col];
            }
            C.mat [row][col] = here;
        }
    }
    return C;
}
// Power of a matrix
matrix power(matrix A, int N) {
    if (N == 0) {
        return identity();
    }

    matrix X = power(A, N / 2) ;
    if (N % 2 == 0) {
        return mul(X, X);
    } 
    else {
        return mul (mul(X, X), A) ;
    }
}