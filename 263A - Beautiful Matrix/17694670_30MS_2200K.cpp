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
    int a = 0, b = 0, m;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>m;
            if (m) {
                a = i;
                b = j;
            }
        }
    }
    cout<<abs(a - 2) + abs(b - 2)<<endl;
    return 0;
}