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
    vector<int> s(4, 0);
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s.begin(), s.end());
    int ans = 0;
    if (s[0] == s[1]) ans++;
    if (s[1] == s[2]) ans++;
    if (s[2] == s[3]) ans++;
    cout<<ans<<endl;
    return 0;
}