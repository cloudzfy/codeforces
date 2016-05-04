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
    cin>>n;
    int a, p;
    int ans = 0, cost = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin>>a>>p;
        cost = min(cost, p);
        ans += cost * a;
    }
    cout<<ans<<endl;
    return 0;
}