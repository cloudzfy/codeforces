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
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '4' || s[i] == '7') count++;
    }
    bool isLucky = true;
    if (count == 0) isLucky = false;
    while (count) {
        if (count % 10 != 4 && count % 10 != 7) isLucky = false;
        count /= 10;
    }
    if (isLucky) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}