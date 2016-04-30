#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_map<string, int> m;
    unordered_set<string> s;
    vector<pair<string, int>> data;
    int n;
    while (cin>>n) {
        string name;
        int score;
        for (int i = 0; i < n; i++) {
            cin>>name>>score;
            data.push_back(make_pair(name, score));
            if (m.find(name) != m.end()) {
                m[name] += score;
            } else m[name] = score;
        }
        int maxInt = INT_MIN;
        for (auto it = m.begin(); it != m.end(); it++) {
            maxInt = max(maxInt, it->second);
        }
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == maxInt) {
                s.insert(it->first);
            }
        }
        m.clear();
        for (int i = 0; i < n; i++) {
            if (m.find(data[i].first) != m.end()) {
                m[data[i].first] += data[i].second;
            } else m[data[i].first] = data[i].second;
            if (m[data[i].first] >= maxInt && s.find(data[i].first) != s.end()) {
                cout<<data[i].first<<endl;
                break;
            }
        }
        m.clear();
    }
    return 0;
}
