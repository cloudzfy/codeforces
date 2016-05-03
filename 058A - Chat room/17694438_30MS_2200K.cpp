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
    string s;
    string pattern = "hello";
    cin>>s;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == pattern[j]) j++;
    }
    if (j == pattern.length()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}