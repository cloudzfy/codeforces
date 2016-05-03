#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool isLucky(int num) {
    while (num) {
        if (num % 10 != 4 && num % 10 != 7) return false;
        num /= 10;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    int num;
    cin>>num;
    vector<bool> m(num + 1, false);
    for (int i = 1; i <= num; i++) {
        if (!isLucky(i)) {
            for (int j = 4; j < i; j++) {
                if (m[j] && i % j == 0) {
                    m[i] = true;
                    break;
                }
            }
        } else m[i] = true;
    }
    if (m[num]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}