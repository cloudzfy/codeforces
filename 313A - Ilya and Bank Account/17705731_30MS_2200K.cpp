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
    if (n >= 0) cout<<n<<endl;
    else {
        int a = - n % 10;
        int b = (- n / 10) % 10;
        if (a < b) cout<<n / 100 * 10 - a <<endl;
        else cout<<n / 100 * 10 - b<<endl;
    }
    return 0;
}