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
    int n, a;
    cin>>n;
    int start = 0, pre = 0, ans = 1;
    for (int i = 0; i < n; i++) {
        cin>>a;
        if (i != 0) {
            if (a < pre) {
                ans = max(ans, i - start);
                start = i;
            } else if (i == n - 1) {
                ans = max(ans, i + 1 - start);
            }
        }
        pre = a;
    }
    cout<<ans<<endl;
    return 0;
}