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
    long long a, b, s;
    cin>>a>>b>>s;
    long long d = s - abs(a) - abs(b);
    if (d >= 0 && d % 2 == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}