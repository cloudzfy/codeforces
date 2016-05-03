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
    int n, p, q;
    int count = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>p>>q;
        if (q - p >= 2)count++;
    }
    cout<<count<<endl;
    return 0;
}