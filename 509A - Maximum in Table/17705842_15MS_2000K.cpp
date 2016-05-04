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
    vector<vector<int> > m(n, vector<int>(n, 1));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            m[i][j] = m[i - 1][j] + m[i][j - 1];
        }
    }
    cout<<m[n - 1][n - 1]<<endl;
    return 0;
}