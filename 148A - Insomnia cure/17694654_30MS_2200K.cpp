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

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int lcm3(int a, int b, int c) {
    int x = a * b / gcd(a, b);
    return x * c / gcd(x, c);
}

int lcm4(int a, int b, int c, int d) {
    int x = a * b / gcd(a, b);
    x = x * c / gcd(x, c);
    return x * d / gcd(x, d);
}
int main(int argc, const char * argv[]) {
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int count = 0;
    count += d / k + d / l + d / m + d / n;
    count -= d / lcm(k, l) + d / lcm(k, m) + d / lcm(k, n) + d / lcm(l, m) + d / lcm(l, n) + d / lcm(m, n);
    count += d / lcm3(k, l, m) + d / lcm3(k, l, n) + d / lcm3(k, m, n) + d / lcm3(l, m, n);
    count -= d / lcm4(k, l, m, n);
    cout<<count<<endl;
    return 0;
}