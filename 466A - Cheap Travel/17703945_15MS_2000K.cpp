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
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    if (a * m <= b) cout<<a * n<<endl;
    else {
        int cost = n / m * b;
        n -= n / m * m;
        if (a * n <= b) cout<<cost + a * n<<endl;
        else cout<<cost + b<<endl;
    }
    return 0;
}