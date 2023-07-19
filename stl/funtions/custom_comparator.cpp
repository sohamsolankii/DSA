#include<iostream>
using namespace std;

bool ispow2(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    while(true)
    {
        int n;
        cin>>n;
        cout<< ispow2(n) <<endl;
    }
    return 0;
}
