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
    int num = 0, total = 0;
    int i = 1;
    while (true) {
        num += i;
        if (total + num > n) break;
        total += num;
        i++;
    }
    cout<<i - 1<<endl;
    return 0;
}