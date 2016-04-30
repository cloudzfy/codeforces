#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    if ((n - 2) % 2 == 0 && n - 2 > 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
