#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first;
}
vector<pair<int, int> > kayak;
vector<pair<int, int> > catamaran;
int main(int argc, const char * argv[]) {
    int n, v;
    int t, p;
    cin>>n>>v;
    for (int i = 0; i < n; i++) {
        cin>>t>>p;
        if (t == 1) kayak.push_back(make_pair(p, i + 1));
        else catamaran.push_back(make_pair(p, i + 1));
    }
    sort(kayak.begin(), kayak.end(), cmp);
    sort(catamaran.begin(), catamaran.end(), cmp);
    int maxCapacity = 0;
    int idx1 = 0, idx2 = 0;
    int n1 = (int)kayak.size();
    int n2 = (int)catamaran.size();
    while (v) {
        if (v >= 2) {
            if (idx1 < n1 && idx2 < n2) {
                if (kayak[idx1].first * 2 > catamaran[idx2].first) {
                    maxCapacity += kayak[idx1].first;
                    idx1++;
                    v--;
                } else {
                    maxCapacity += catamaran[idx2].first;
                    idx2++;
                    v-=2;
                }
            } else if (idx2 < n2) {
                maxCapacity += catamaran[idx2].first;
                idx2++;
                v-=2;
            } else if (idx1 < n1) {
                maxCapacity += kayak[idx1].first;
                idx1++;
                v--;
            } else break;
        } else if (v >= 1) {
            if (idx1 < n1) {
                maxCapacity += kayak[idx1].first;
                idx1++;
                v--;
            } else break;
        }

    }
    if (v >= 1) {
        if (idx1 >= 1 && kayak[idx1 - 1].first < catamaran[idx2].first) {
            maxCapacity -= kayak[idx1 - 1].first;
            maxCapacity += catamaran[idx2].first;
            idx1--;
            idx2++;
        }
    }
    cout<<maxCapacity<<endl;
    int count = 0;
    for (int i = 0; i < idx1; i++) {
        if (count != 0) cout<<" ";
        cout<<kayak[i].second;
        count++;
    }
    for (int i = 0; i < idx2; i++) {
        if (count != 0) cout<< " ";
        cout<<catamaran[i].second;
        count++;
    }
    cout<<endl;
    return 0;
}
