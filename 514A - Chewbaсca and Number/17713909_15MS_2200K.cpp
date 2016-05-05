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
    string x;
    cin>>x;
    for (int i = 0; i < x.length(); i++) {
        int num = x[i] - '0';
        if (num > 9 - num) {
            if (i == 0 && 9 - num == 0) continue;
            x[i] = 9 - num + '0';
        }
    }
    cout<<x<<endl;
    return 0;
}