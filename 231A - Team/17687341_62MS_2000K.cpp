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
    int a, b, c;
    cin>>n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin>>a>>b>>c;
        if (a + b + c >= 2) count++;
    }
    cout<<count<<endl;
}