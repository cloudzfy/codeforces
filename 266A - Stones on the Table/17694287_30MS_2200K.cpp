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
    int n;
    string s;
    cin>>n>>s;
    int count = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) count++;
    }
    cout<<count<<endl;
    return 0;
}