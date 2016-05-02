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
    int n, k;
    cin>>n>>k;
    vector<int> score(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>score[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (score[i] >= max(score[k - 1], 1)) count++;
    }
    cout<<count<<endl;
    return 0;
}