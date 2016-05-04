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
    int n;
    cin>>n;
    vector<int> a(n, 0);
    int minA = INT_MAX, maxA = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        minA = min(minA, a[i]);
        maxA = max(maxA, a[i]);
    }
    int idxMin = n - 1;
    while (a[idxMin] != minA) idxMin--;
    int idxMax = 0;
    while (a[idxMax] != maxA) idxMax++;
    int ans = 0;
    if (idxMax < idxMin) {
        ans = idxMax + n - idxMin - 1;
    } else if (idxMax > idxMin) {
        ans = idxMax + n - idxMin - 2;
    }
    cout<<ans<<endl;
    return 0;
}