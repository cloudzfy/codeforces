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
    int n, c;
    int ans = 0, officer = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>c;
        if (c < 0) {
            if (officer <= 0) ans++;
            else officer--;
        } else officer += c;
    }
    cout<<ans<<endl;
    return 0;
}