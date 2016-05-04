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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (i != 0) cout<<" ";
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}