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
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (i + 1) * (n - i) - i;
    }
    cout<<ans<<endl;
    return 0;
}