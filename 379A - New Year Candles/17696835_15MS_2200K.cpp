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
    int a, b;
    cin>>a>>b;
    int ans = a;
    while (a / b) {
        ans += a / b;
        a = a / b + a % b;
    }
    cout<<ans<<endl;
    return 0;
}