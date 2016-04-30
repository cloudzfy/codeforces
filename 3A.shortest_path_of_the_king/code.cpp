#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> ans;
    char s[3], t[3];
    scanf("%s%s", s, t);
    int horizontal = t[0] - s[0];
    int vertical = t[1] - s[1];
    if (horizontal != 0 && vertical != 0) {
        int step = min(abs(horizontal), abs(vertical));
        if (horizontal > 0 && vertical > 0) {
            horizontal -= step;
            vertical -=step;
            while (step--) ans.push_back("RU");
        } else if (horizontal > 0 && vertical < 0) {
            horizontal -= step;
            vertical += step;
            while (step--) ans.push_back("RD");
        } else if (horizontal < 0 && vertical > 0) {
            horizontal += step;
            vertical -= step;
            while (step--) ans.push_back("LU");
        } else {
            horizontal += step;
            vertical += step;
            while (step--) ans.push_back("LD");
        }
    }
    if (horizontal != 0) {
        int step = abs(horizontal);
        if (horizontal > 0) {
            horizontal -= step;
            while (step--) ans.push_back("R");
        } else {
            horizontal += step;
            while (step--) ans.push_back("L");
        }
    }
    if (vertical != 0) {
        int step = abs(vertical);
        if (vertical > 0) {
            vertical -= step;
            while (step--) ans.push_back("U");
        } else {
            vertical += step;
            while (step--) ans.push_back("D");
        }
    }
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}
