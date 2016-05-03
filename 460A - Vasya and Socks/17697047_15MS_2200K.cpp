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
    int n, m;
    cin>>n>>m;
    int ans = n;
    int k = 0;
    while (true) {
        int tmp = ans / m;
        ans = ans + ans / m - k;
        if (tmp - k == 0) break;
        k = tmp;
    }
    cout<<ans<<endl;
    return 0;
}