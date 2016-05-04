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
    int n;
    cin>>n;
    vector<int> data(n, 0);
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        cin>>data[i];
        if (data[i] % 2 == 1) odd++;
        else even++;
    }
    for (int i = 0; i < n; i++) {
        if (odd == 1 && data[i] % 2 == 1) {
            cout<<i + 1<<endl;
            return 0;
        }
        if (even == 1 && data[i] % 2 == 0) {
            cout<<i + 1<<endl;
            return 0;
        }
    }
    return 0;
}