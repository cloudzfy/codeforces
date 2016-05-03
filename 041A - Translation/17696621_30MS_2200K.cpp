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
    string s, t;
    bool correct = true;
    cin>>s>>t;
    if (s.length() != t.length()) correct = false;
    else {
        int len = (int)s.length();
        for (int i = 0; i < len; i++) {
            if (s[i] != t[len - i - 1]) {
                correct = false;
                break;
            }
        }
    }
    if (correct) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}