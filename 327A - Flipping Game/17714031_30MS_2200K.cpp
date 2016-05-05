#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, a;
    cin>>n;
    vector<int> dp(n, 0);
    int origin = 0;
    for (int i = 0; i < n; i++) {
        cin>>a;
        origin += a;
        if (a == 0) dp[i] = 1;
        else dp[i] = -1;
    }
    int sum = 0, ans = -1;
    for (int i = 0; i < n; i++) {
        sum += dp[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
    cout<<ans + origin<<endl;
    return 0;
}