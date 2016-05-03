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
    if (s[0] <= 'z' && s[0] >= 'a') s[0] -= 'a' - 'A';
    cout<<s<<endl;
    return 0;
}