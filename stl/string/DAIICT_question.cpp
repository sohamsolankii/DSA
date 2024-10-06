/* 
    question: 

    There are several interdependent resources being served from "https://api.example.com" where each resource is parameterized with some ID. For example, the API:

    https://api.example.com/resource1/id1/resource2/id2/resource3/id3

    serves the resource "resource1/resource2/resource3" and is said to have a 3-level dependency.

    Given n strings as an array, requests, list the resources served with single-level dependency, followed by two-level dependency, followed by 3-level dependency, and so on. Each level of resources should be in lexicographically sorted order, e.g., resource1 precedes resource10, which precedes resource2.

    Note: Each of the served resources has the form "resource<id>".

 */


#include<bits/stdc++.h>
using namespace std;

vector<string> getResourceList(vector<string> requests) {
    
    map<int, vector<string>> levels;

    for (const string &request : requests) {
        stringstream ss(request);
        string part;
        vector<string> currentResources;

        while (getline(ss, part, '/')) {
            if (part.find("resource") == 0) {
                currentResources.push_back(part);
            }
        }

        // for(auto it : currentResources)
        // {
        //     cout << it << "  ";
        // } cout << endl << endl;

        int resourceCount = currentResources.size();
        if (resourceCount > 0) {
            string resourcePath = currentResources[0];
            for (int i = 1; i < resourceCount; i++) {
                resourcePath += "/" + currentResources[i];
            }
            levels[resourceCount].push_back(resourcePath);
        }
    }

    vector<string> result;

    for (auto &entry : levels) {
        sort(entry.second.begin(), entry.second.end());
        for (const string &resource : entry.second) {
            result.push_back(resource);
        }
    }

    return result;
}

int main(){

    vector<string> question = {"https://api/example.com/resource1/id/resource3/id2",
                        "https://api/example.com/resource2",
                        "https://api/example.com/resource2/id",
                        "https://api/example.com/resource1/id/resource4/id5"
                    };

    vector<string> ans = getResourceList(question);

    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

}