#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_set<string> m;
    char str[200];
    int ans = 0;
    while (gets(str)) {
        if (str[0] == '+') {
            m.insert(str + 1);
        } else if (str[0] == '-') {
            m.erase(str + 1);
        } else {
            for (int i = 0; str[i] != 0; i++) {
                if (str[i] == ':') {
                    ans += (strlen(str) - i - 1) * m.size();
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
