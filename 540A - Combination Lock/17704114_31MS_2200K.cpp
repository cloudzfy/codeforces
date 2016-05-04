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
    string s, t;
    cin>>n;
    cin>>s>>t;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int tmp = abs(s[i] - t[i]);
        if (tmp > 5) ans += 10 - tmp;
        else ans += tmp;
    }
    cout<<ans<<endl;
    return 0;
}