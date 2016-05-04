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
    int n, m;
    cin>>n>>m;
    vector<vector<char>> data(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++) {
        if (i % 4 == 0) {
            for (int j = 0; j < m; j++) data[i][j] = '#';
        } else if (i % 4 == 1) {
            data[i][m - 1] = '#';
        } else if (i % 4 == 2) {
            for (int j = m - 1; j >= 0; j--) data[i][j] = '#';
        } else {
            data[i][0] = '#';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<data[i][j];
        }
        cout<<endl;
    }
    return 0;
}