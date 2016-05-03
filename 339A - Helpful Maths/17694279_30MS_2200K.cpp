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
    string s;
    cin>>s;
    vector<char> m;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] <= '3' && s[i] >= '1') m.push_back(s[i]);
    }
    sort(m.begin(), m.end());
    for (int i = 0; i < m.size(); i++) {
        if (i != 0) cout<<"+";
        cout<<m[i];
    }
    cout<<endl;
    return 0;
}