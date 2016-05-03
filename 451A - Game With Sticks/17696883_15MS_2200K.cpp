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
    int n, m;
    cin>>n>>m;
    if (min(n, m) % 2 == 1) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
    return 0;
}