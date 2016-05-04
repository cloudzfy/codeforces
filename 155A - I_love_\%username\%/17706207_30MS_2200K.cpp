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
    int n, p;
    int maxPoint = INT_MIN;
    int minPoint = INT_MAX;
    int ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>p;
        if (i > 0) {
            if (p > maxPoint || p < minPoint) ans++;
        }
        maxPoint = max(maxPoint, p);
        minPoint = min(minPoint, p);
    }
    cout<<ans<<endl;
    return 0;
}