#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool isValid(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') return false;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    if (isValid(s)) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] <= 'Z' && s[i] >= 'A') s[i] -= 'A' - 'a';
            else s[i] -= 'a' - 'A';
        }
    }
    cout<<s<<endl;
    return 0;
}