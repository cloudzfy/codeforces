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
    int x, y, z;
    int sumX = 0, sumY = 0, sumZ = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x>>y>>z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}