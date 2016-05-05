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
    int n, d, t;
    int sum = 0;
    int count = 0;
    cin>>n>>d;
    for (int i = 0; i < n; i++) {
        cin>>t;
        sum += t;
        if (i != 0) {
            sum += 10;
            count += 2;
        }
    }
    if (sum > d) cout<<-1<<endl;
    else cout<<count + (d - sum) / 5<<endl;
    return 0;
}