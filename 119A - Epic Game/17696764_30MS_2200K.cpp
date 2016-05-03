#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int r;
    while (b > 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(int argc, const char * argv[]) {
    int a, b, n;
    cin>>a>>b>>n;
    bool Simon = true;
    while (true) {
        n -= gcd(a, n);
        if (n < 0) {
            Simon = false;
            break;
        }
        n -= gcd(b, n);
        if (n < 0) {
            Simon = true;
            break;
        }
    }
    if (Simon) cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}