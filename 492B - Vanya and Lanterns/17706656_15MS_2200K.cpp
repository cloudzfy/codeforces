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
    int n, l;
    cin>>n>>l;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int ans = 2 * a[0];
    for(int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[i - 1]);
    }
    ans = max(ans, 2 * (l - a[n - 1]));
    printf("%.10f\n", (double)ans / 2);
    return 0;
}