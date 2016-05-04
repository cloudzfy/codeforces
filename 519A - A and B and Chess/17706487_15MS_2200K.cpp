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
    char white[] = {'Q', 'R', 'B', 'N', 'P', 'K'};
    char black[] = {'q', 'r', 'b', 'n', 'p', 'k'};
    int weight[] = {9, 5, 3, 3, 1, 0};
    unordered_map<char, int> m;
    for (int i = 0; i < 5; i++) {
        m[white[i]] = weight[i];
        m[black[i]] = - weight[i];
    }
    string s;
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        cin>>s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '.') {
                ans += m[s[i]];
            }
        }
    }
    if (ans > 0) cout<<"White"<<endl;
    else if (ans < 0) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
    return 0;
}