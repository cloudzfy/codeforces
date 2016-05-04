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
    int c;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin>>c;
        sum += c;
    }
    if (sum % 5 == 0 && sum > 0) cout<<sum / 5<<endl;
    else cout<<-1<<endl;
    return 0;
}