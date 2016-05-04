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
    string a, b, c;
    vector<int> m1(26, 0);
    vector<int> m2(26, 0);
    cin>>a>>b>>c;
    for (int i = 0; i < a.length(); i++) {
        m1[a[i] - 'A']++;
    }
    for (int i = 0; i < b.length(); i++) {
        m1[b[i] - 'A']++;
    }
    for (int i = 0; i < c.length(); i++) {
        m2[c[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (m1[i] != m2[i]) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}