#include<bits/stdc++.h>
using namespace std;

void findingSubset(char *input, char *output,int i, int j){ 
    //base case
    if(input[i]=='\0'){
        output[j]='\0';

        if(output[0]=='\0'){
            cout << "Null" << endl;
        }
        cout << output << endl;
        return;
    }

    //rec case
    // Include the ith latter
    output[j] = input[i];
    findingSubset(input,output,i+1,j+1);

    // excluding the ith letter
    findingSubset(input,output,i+1,j);
    
}
int main(){
    char input[100];
    char output[100];

    cin >> input;
    findingSubset(input,output,0,0);
}