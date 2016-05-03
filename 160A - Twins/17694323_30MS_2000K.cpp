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
    vector<int> coin(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin>>coin[i];
        sum += coin[i];
    }
    sort(coin.begin(), coin.end());
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        count += coin[i];
        sum -= coin[i];
        if (count > sum) {
            cout<<n - i<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}