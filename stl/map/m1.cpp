#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    map<int,string> m;  //key,value
        m[1] ="abc";        // O(log(n))
        m[2] = "bcd";
        m[1] = "sos";
        m[3];
        m.insert({4,"afg"});

        for(auto &x:m){
            cout << x.first << " "  << x.second << endl;
        }

        cout << "size of map: " << m.size() << endl;

         if(m.find(2)!=m.end()){
         //if the element is found before the end of the map
            cout<<"found the Value : "<< m[2]<<endl;
         }
        //if the element is present then you can access it using the index
        else cout<<" : Not found"<<endl;
    
    return 0;
}
/*

map are store in sorted form - un order oppose it
map store unique value

map store like key and value 
it creat pair memory block
continue memory allowcation na hoii so usse i++

*/
