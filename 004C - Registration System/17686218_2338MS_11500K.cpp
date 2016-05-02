#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    string name;
    unordered_map<string, int> m;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>name;
        if (m.find(name) != m.end()) {
            m[name]++;
            string name1 = name + to_string(m[name]);
            m[name1] = 0;
            cout<<name1<<endl;
        } else {
            m[name] = 0;
            cout<<"OK"<<endl;
        }
    }
    return 0;
}
