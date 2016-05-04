#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
int main(int argc, const char * argv[]) {
    int s, n;
    cin>>s>>n;
    vector<pair<int, int> > m;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin>>x>>y;
        m.push_back(make_pair(x, y));
    }
    sort(m.begin(), m.end(), cmp);
    bool win = true;
    for (int i = 0; i < n; i++) {
        if (s > m[i].first) {
            s += m[i].second;
        } else {
            win = false;
            break;
        }
    }
    if (win) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}