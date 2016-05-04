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
    long long n;
    cin>>n;
    if (n % 2 == 0) cout<<n / 2<<endl;
    else cout<<(n - 1) / 2 - n<<endl;
    return 0;
}