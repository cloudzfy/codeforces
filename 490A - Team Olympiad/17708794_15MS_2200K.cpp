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
    int n, t;
    vector<vector<int> > m(3, vector<int>());
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>t;
        m[t - 1].push_back(i + 1);
    }
    int w = min((int)m[0].size(), min((int)m[1].size(), (int)m[2].size()));
    cout<<w<<endl;
    for (int i = 0; i < w; i++) {
        cout<<m[0][i]<<" "<<m[1][i]<<" "<<m[2][i]<<endl;
    }
    return 0;
}