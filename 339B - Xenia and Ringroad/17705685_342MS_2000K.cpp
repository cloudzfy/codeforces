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
    long long n, a;
    int m;
    long long ans = 0, pre = 1;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        cin>>a;
        if (pre <= a) ans += a - pre;
        else ans += n + a - pre;
        pre = a;
    }
    cout<<ans<<endl;
    return 0;
}