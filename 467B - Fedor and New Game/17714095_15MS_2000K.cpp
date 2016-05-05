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
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> x(m + 1, 0);
    for (int i = 0; i < m + 1; i++) {
        cin>>x[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int tmp = x[m] ^ x[i];
        int count = 0;
        while (tmp) {
            count += tmp & 1;
            tmp >>= 1;
        }
        if (count <= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}