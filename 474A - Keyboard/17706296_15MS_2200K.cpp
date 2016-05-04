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
    string key[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    unordered_map<char, char> m;
    string d;
    cin>>d;
    if (d == "R") {
        for (int i = 0; i < 3; i++) {
            for (int j = 1; key[i][j] != 0; j++) {
                m[key[i][j]] = key[i][j - 1];
            }
        }
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 1; key[i][j] != 0; j++) {
                m[key[i][j - 1]] = key[i][j];
            }
        }
    }
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++) {
        s[i] = m[s[i]];
    }
    cout<<s<<endl;
    return 0;
}