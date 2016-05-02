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
    char chess[8][9];
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%s",chess[i]);
    }
    for (int i = 0; i < 8; i++) {
        int count = 0;
        for (int j = 0; j < 8; j++) {
            if (chess[i][j] == 'B') count++;
        }
        if (count == 8) ans++;
    }
    for (int j = 0; j < 8; j++) {
        int count = 0;
        for (int i = 0; i < 8; i++) {
            if (chess[i][j] == 'B') count++;
        }
        if (count == 8) ans++;
    }
    if (ans == 16) ans = 8;
    printf("%d\n", ans);
    return 0;
}
