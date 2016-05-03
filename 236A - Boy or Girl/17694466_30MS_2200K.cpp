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
    cin>>s;
    vector<int> m(26, 0);
    for (int i = 0; i < s.length(); i++) {
        m[s[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (m[i]) count++;
    }
    if (count % 2 == 1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}