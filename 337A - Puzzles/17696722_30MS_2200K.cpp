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
    int n, m;
    cin>>n>>m;
    vector<int> f(m, 0);
    for (int i = 0; i < m; i++) {
        cin>>f[i];
    }
    sort(f.begin(), f.end());
    int diff = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++) {
        diff = min(diff, f[i + n - 1] - f[i]);
    }
    cout<<diff<<endl;
    return 0;
}