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
    string s;
    vector<bool> m(26, 0);
    int count = 0;
    cin>>n>>s;
    for (int i = 0; i < n; i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            if (!m[s[i] - 'A']) {
                m[s[i] - 'A'] = true;
                count++;
            }
        } else {
            if (!m[s[i] - 'a']) {
                m[s[i] - 'a'] = true;
                count++;
            }
        }
    }
    if (count == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}