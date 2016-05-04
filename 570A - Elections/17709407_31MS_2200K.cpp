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
    int n, m, a;
    cin>>n>>m;
    vector<int> count(n, 0);
    for (int i = 0; i < m; i++) {
        int maxVotes = INT_MIN, idx = -1;
        for (int j = 0; j < n; j++) {
            cin>>a;
            if (a > maxVotes) {
                maxVotes = a;
                idx = j;
            }
        }
        count[idx]++;
    }
    int maxVotes = INT_MIN, idx = -1;
    for (int i = 0; i < n; i++) {
        if (count[i] > maxVotes) {
            maxVotes = count[i];
            idx = i;
        }
    }
    cout<<idx + 1<<endl;
    return 0;
}