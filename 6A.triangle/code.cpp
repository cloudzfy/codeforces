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
    vector<int> sticks(4,0);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &sticks[i]);
    }
    sort(sticks.begin(), sticks.end());
    if (sticks[0] + sticks[1] > sticks[2] || sticks[1] + sticks[2] > sticks[3]) {
        printf("TRIANGLE\n");
    } else if (sticks[0] + sticks[1] == sticks[2] || sticks[0] + sticks[1] == sticks[3]
               || sticks[0] + sticks[2] == sticks[3] || sticks[1] + sticks[2] == sticks[3]) {
        printf("SEGMENT\n");
    } else printf("IMPOSSIBLE\n");
    return 0;
}
