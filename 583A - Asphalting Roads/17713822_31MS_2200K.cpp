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
    int n, h, v;
    cin>>n;
    vector<bool> rows(n, false);
    vector<bool> cols(n, false);
    vector<int> ans;
    for (int i = 0; i < n * n; i++) {
        cin>>h>>v;
        if (!rows[h - 1] && !cols[v - 1]) {
            rows[h - 1] = true;
            cols[v - 1] = true;
            ans.push_back(i + 1);
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}