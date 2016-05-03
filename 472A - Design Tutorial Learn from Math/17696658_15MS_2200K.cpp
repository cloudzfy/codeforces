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
    if (n % 2 == 0) cout<<4<<" "<<n - 4<<endl;
    else cout<<9<<" "<<n - 9<<endl;
    return 0;
}