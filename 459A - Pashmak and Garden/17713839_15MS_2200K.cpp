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
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    if (x1 == x2 && y1 == y2) cout<<-1<<endl;
    else if (x1 == x2) {
        cout<<x1 + abs(y1 - y2)<<" "<<y1<<" "<<x2 + abs(y1 - y2)<<" "<<y2<<endl;
    } else if (y1 == y2) {
        cout<<x1<<" "<<y1 + x1 - x2<<" "<<x2<<" "<<y2 + x1 - x2<<endl;
    } else {
        if (abs(x1 - x2) != abs(y1 - y2)) cout<<-1<<endl;
        else cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    return 0;
}