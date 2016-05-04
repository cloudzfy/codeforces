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
    string a, b;
    cin>>a>>b;
    string c = a;
    for (int i = 0; i < c.length(); i++) {
        c[i] = a[i] == b[i] ? '0' : '1';
    }
    cout<<c<<endl;
    return 0;
}