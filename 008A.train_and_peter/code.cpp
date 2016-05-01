#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

vector<int> getNext(string& s) {
    vector<int> next(s.length(), 0);
    next[0] = -1;
    int i = 0, j = -1;
    while (i < s.length() - 1) {
        if (j == -1 || s[i] == s[j]) {
            next[++i] = ++j;
        } else {
            j = next[j];
        }
    }
    return next;
}
int kmp1(string& s, string& t, vector<int>& next, int index) {
    int i = index, j = 0;
    while (i < (int)s.length() && j < (int)t.length()) {
        if (j == -1 || s[i] == t[j]) {
            i++;
            j++;
        } else {
            j = next[j];
        }
    }
    if (j == (int)t.length()) return i;
    else return -2;
}
int kmp2(string &s, string &t, vector<int> &next, int index) {
    int i = index, j = 0;
    while (i >= 0 && j < (int)t.length()) {
        if (j == -1 || s[i] == t[j]) {
            i--;
            j++;
        } else {
            j = next[j];
        }
    }
    if (j == (int)t.length()) return i;
    else return -2;
}
int main(int argc, const char * argv[]) {
    string flag;
    string wake1, wake2;
    int ans = 0;
    cin>>flag;
    cin>>wake1>>wake2;
    vector<int> next1 = getNext(wake1);
    vector<int> next2 = getNext(wake2);
    int idx = kmp1(flag, wake1, next1, 0);
    if (idx != -2 && kmp1(flag, wake2, next2, idx) != -2) {
        ans = 1;
    }
    idx = kmp2(flag, wake1, next1, (int)flag.length() - 1);
    if (idx != -2 && kmp2(flag, wake2, next2, idx) != -2) {
        ans += 2;
    }
    if (ans == 0) cout<<"fantasy"<<endl;
    else if (ans == 1) cout<<"forward"<<endl;
    else if (ans == 2) cout<<"backward"<<endl;
    else cout<<"both"<<endl;
    return 0;
}
