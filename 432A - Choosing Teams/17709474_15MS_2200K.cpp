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
    int n, k, y;
    cin>>n>>k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin>>y;
        if (5 - y >= k) count++;
    }
    cout<<count / 3<<endl;
    return 0;
}