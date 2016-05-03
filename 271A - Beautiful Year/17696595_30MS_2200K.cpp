#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool isDistinct(int num) {
    vector<int> m(10, 0);
    while (num) {
        m[num % 10]++;
        if (m[num % 10] > 1) return false;
        num /= 10;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    int y;
    cin>>y;
    y++;
    while (!isDistinct(y)) y++;
    cout<<y<<endl;
    return 0;
}