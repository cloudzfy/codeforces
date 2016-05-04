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
    vector<bool> m(26, 0);
    int ans = 0;
    string s;
    cin>>s;
    if (s != "{}") {
        m[s[1] - 'a'] = true;
        ans++;
        while (s[s.length() - 1] != '}') {
            cin>>s;
            if (!m[s[0] - 'a']) {
                m[s[0] - 'a'] = true;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}