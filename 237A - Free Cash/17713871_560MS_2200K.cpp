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
    int n, h, m;
    int count = 1, pre = -1;
    int ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>h>>m;
        if (pre != 60 * h + m) {
            count = 1;
            pre = 60 * h + m;
        } else count++;
        ans = max(ans, count);
    }
    cout<<ans<<endl;
    return 0;
}