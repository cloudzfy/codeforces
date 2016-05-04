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
    int a, b, c;
    cin>>a>>b>>c;
    int ans = a + b + c;
    ans = max(ans, a * b + c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * b * c);
    cout<<ans<<endl;
    return 0;
}