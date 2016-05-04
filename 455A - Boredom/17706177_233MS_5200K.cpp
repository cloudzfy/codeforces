#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    long long a;
    cin>>n;
    map<long long, long long> m;
    for (int i = 0; i < n; i++) {
        cin>>a;
        m[a]++;
    }
    vector<long long> dp(m.size() + 1, 0);
    auto it = m.begin();
    dp[1] = it->first * it->second;
    long long pre = it->first;
    it++;
    for (int i = 2; it != m.end(); it++, i++) {
        if (it->first != pre + 1) {
            dp[i] = max(dp[i - 1] + it->first * it->second, dp[i - 2] + it->first * it->second);
        } else dp[i] = max(dp[i - 1], dp[i - 2] + it->first * it->second);
        pre = it->first;
    }
    cout<<dp[m.size()]<<endl;
    return 0;
}