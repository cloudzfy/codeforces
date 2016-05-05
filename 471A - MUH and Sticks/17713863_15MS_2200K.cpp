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
    vector<int> s(9, 0);
    int l;
    for (int i = 0; i < 6; i++) {
        cin>>l;
        s[l - 1]++;
    }
    bool isAlien = true;
    for (int i = 0; i < 9; i++) {
        if (s[i] >= 4) {
            s[i] -= 4;
            isAlien = false;
            break;
        }
    }
    if (isAlien) {
        cout<<"Alien"<<endl;
        return 0;
    }
    bool isBear = true;
    for (int i = 0; i < 9; i++) {
        if (s[i] >= 2) {
            isBear = false;
            break;
        }
    }
    if (isBear) cout<<"Bear"<<endl;
    else cout<<"Elephant"<<endl;
    return 0;
}