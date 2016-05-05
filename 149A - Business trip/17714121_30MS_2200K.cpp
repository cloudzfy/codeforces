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
    int k;
    cin>>k;
    vector<int> a(12, 0);
    for (int i = 0; i < 12; i++) {
        cin>>a[i];
    }
    if (k == 0) {
        cout<<0<<endl;
        return 0;
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 11; i >= 0; i--) {
        sum += a[i];
        if (sum >= k) {
            cout<<12 - i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}