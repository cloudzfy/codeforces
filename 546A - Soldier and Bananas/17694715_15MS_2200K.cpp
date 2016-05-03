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
    int k, n, w;
    cin>> k>>n>>w;
    cout<<max(w * (1 + w) * k / 2 - n, 0)<<endl;
    return 0;
}