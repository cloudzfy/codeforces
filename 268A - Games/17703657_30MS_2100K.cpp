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
    int n, h;
    cin>>n;
    unordered_map<int, int> m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>h>>a[i];
        m[h]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) != m.end()) {
            ans += m[a[i]];
        }
    }
    cout<<ans<<endl;
    return 0;
}