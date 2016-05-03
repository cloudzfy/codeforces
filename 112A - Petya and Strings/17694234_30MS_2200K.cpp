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
    string a, b;
    cin>>a>>b;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] -= 'A' - 'a';
        if (b[i] >= 'A' && b[i] <= 'Z') b[i] -= 'A' - 'a';
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] < b[i]) {
            cout<<-1<<endl;
            return 0;
        } else if (a[i] > b[i]) {
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}