#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, x;
    cin>>n>>x;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0) {
            if (x / i <= n) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}