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
    int t, a;
    cin>>t;
    while (t--) {
        cin>>a;
        if (360 % (180 - a) == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}