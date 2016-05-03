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
    int n, s;
    vector<int> m(4, 0);
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>s;
        m[s - 1]++;
    }
    int ans = 0;
    ans += m[3];
    ans += m[2];
    m[0] -= min(m[0], m[2]);
    ans += m[1] / 2;
    m[1] -= (m[1] | 1) - 1;
    if (m[1]) {
        ans++;
        m[0] -= 2;
    }
    if (m[0] > 0) {
        ans += ceil((double)m[0] / 4);
    }
    cout<<ans<<endl;
}