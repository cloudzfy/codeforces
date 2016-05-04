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
    int x;
    cin>>x;
    if (x % 5 == 0) cout<<x / 5<<endl;
    else cout<< x / 5 + 1<<endl;
    return 0;
}