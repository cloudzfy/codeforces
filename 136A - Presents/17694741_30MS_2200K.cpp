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
    int n, p;
    cin>>n;
    vector<int> m(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>p;
        m[p - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        if (i != 0) cout<<" ";
        cout<<m[i];
    }
    cout<<endl;
    return 0;
}