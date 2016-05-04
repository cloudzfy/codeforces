#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    stack<char> s;
    int n;
    string str;
    cin>>n>>str;
    for (int i = 0; i < n; i++) {
        if (!s.empty() && s.top() != str[i]) {
            s.pop();
        } else {
            s.push(str[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}