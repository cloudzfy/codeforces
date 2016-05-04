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
    int n;
    cin>>n;
    vector<int> x(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>x[i];
    }
    for (int i = 0; i < n; i++) {
        if (i > 0 && i < n - 1) cout<<min(x[i] - x[i - 1], x[i + 1] - x[i]);
        else if (i > 0) cout<<x[i] - x[i - 1];
        else cout<<x[i + 1] - x[i];
        cout<<" ";
        cout<<max(x[i] - x[0], x[n - 1] - x[i])<<endl;
    }
    return 0;
}