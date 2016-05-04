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
    int x;
    cin>>x;
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    cout<<count<<endl;
    return 0;
}