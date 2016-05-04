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
    int n, m;
    cin>>n>>m;
    int ans = ceil((double)((n + 1) / 2) / m) * m;
    if (ans <= n) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}