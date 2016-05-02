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
    int n, d;
    int b;
    int pre = 0;
    int count = 0;
    cin>>n>>d;
    for (int i = 0; i < n; i++) {
        cin>>b;
        if (i != 0) {
            while (pre >= b) {
                b += d;
                count++;
            }
        }
        pre = b;
    }
    cout<<count<<endl;
    return 0;
}
