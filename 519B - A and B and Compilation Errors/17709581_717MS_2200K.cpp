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
    int n, a, b, c;
    int error1 = 0, error2 = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a;
        error1 ^= a;
    }
    for (int i = 0; i < n - 1; i++) {
        cin>>b;
        error1 ^= b;
        error2 ^= b;
    }
    for (int i = 0; i < n - 2; i++) {
        cin>>c;
        error2 ^= c;
    }
    cout<<error1<<endl;
    cout<<error2<<endl;
    return 0;
}