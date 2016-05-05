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
    long long a, b;
    cin>>a>>b;
    long long count = 0;
    while (b != 0) {
        count += a / b;
        long long r = a % b;
        a = b;
        b = r;
    }
    cout<<count<<endl;
    return 0;
}