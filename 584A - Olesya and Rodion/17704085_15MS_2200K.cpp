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
    int n, t;
    cin>>n>>t;
    if (n == 1 && t == 10) cout<<-1<<endl;
    else {
        if (t == 10) cout<<1;
        else cout<<t;
        for (int i = 1; i < n; i++) cout<<0;
        cout<<endl;
    }
    return 0;
}