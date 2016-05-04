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
    int a, b;
    cin>>a>>b;
    int c = min(a, b);
    int d = (max(a, b) - c) / 2;
    cout<<c<<" "<<d<<endl;
    return 0;
}