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
    string s;
    cin>>s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') upper++;
        else lower++;
    }
    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] <= 'z' && s[i] >= 'a') s[i] -= 'a' - 'A';
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] <= 'Z' && s[i] >= 'A') s[i] -= 'A' - 'a';
        }
    }
    cout<<s<<endl;
    return 0;
}