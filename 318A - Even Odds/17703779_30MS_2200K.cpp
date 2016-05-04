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
    long long n, k;
    cin>>n>>k;
    if (2 * k - 1 <= n) cout<<2 * k - 1<<endl;
    else cout<<2 * (k - (n + 1) / 2)<<endl;
    return 0;
}