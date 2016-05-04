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
    string ans;
    cin>>s;
    bool wub = false;
    bool leading = true;
    for (int i = 0; i < s.length(); i++) {
        if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            wub = true;
        } else {
            if (leading) {
                leading = false;
                wub = false;
            }
            else if (wub) {
                ans.push_back(' ');
                wub = false;
            }
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}