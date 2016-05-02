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
    int n, p1, p2, p3, t1, t2;
    int l, r;
    vector<pair<int, int>> period;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    for (int i = 0; i < n; i++) {
        cin>>l>>r;
        period.push_back(make_pair(l, r));
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (period[i].second - period[i].first) * p1;
    }
    for (int i = 1; i < n; i++) {
        int tmp = period[i].first - period[i - 1].second;
        if (tmp < t1) {
            ans += tmp * p1;
            continue;
        } else ans += t1 * p1;
        if (tmp < t1 + t2) {
            ans += (tmp - t1) * p2;
            continue;
        } else ans += t2 * p2;
        if (tmp > t1 + t2) ans += (tmp - t1 - t2) * p3;
    }
    cout<<ans<<endl;
    return 0;
}
