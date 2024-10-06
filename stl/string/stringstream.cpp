#include<bits/stdc++.h>
using namespace std;

int main(){

    // example - 1
    stringstream ss;
    ss << 123 << " hello " << 45.67; // Inserting data into the stringstream with space seprated 

    string ans = ss.str();
    cout << ans << endl;            // 123 hello 45.67

    string one, two , three;
    ss >> one >> two >> three;   // will give no output because internal pointer is at the end of the data.

    // solution of above is
    // Reset the stringstream using the same string
    ss.str(ans); // Re-assign the string to the stream
    ss.clear();  // Clear any error flags like EOF to ensure it can be read again

    string first, second, third;
    ss >> first >> second >> third;

    cout << "first: " << first << ", second: " << second << ", third: " << third << endl;


    // example 2
    string data = "123 456 789";

    stringstream ss(data);
    int x, y, z;

    ss >> x >> y >> z;

    cout << "Extracted values: " << x << ", " << y << ", " << z << endl;

}