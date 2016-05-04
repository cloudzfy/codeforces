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
    int n, t;
    cin>>n>>t;
    vector<bool> visited(n, false);
    vector<int> m(n, 0);
    for (int i = 0; i < n - 1; i++) {
        cin>>m[i];
    }
    int cur = 0;
    while (cur != t - 1) {
        if (visited[cur]) break;
        visited[cur] = true;
        cur += m[cur];
    }
    if (cur == t - 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}