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

bool cmp1(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

bool cmp2(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main(int argc, const char * argv[]) {
    int n, x;
    cin>>n;
    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        cin>>x;
        a.push_back(make_pair(x, i));
    }
    sort(a.begin(), a.end(), cmp1);
    int pre = a[0].first;
    int idx = 1;
    a[0].first = 1;
    for (int i = 1; i < n; i++) {
        if (a[i].first == pre) {
            a[i].first = idx;
        } else {
            idx = i + 1;
            pre = a[i].first;
            a[i].first = idx;
        }
    }
    sort(a.begin(), a.end(), cmp2);
    for (int i = 0; i < n; i++) {
        if (i != 0) cout<<" ";
        cout<<a[i].first;
    }
    cout<<endl;
    return 0;
}