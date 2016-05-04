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
    int n, p, a;
    cin>>n;
    vector<bool> pass(n, false);
    cin>>p;
    for (int i = 0; i < p; i++) {
        cin>>a;
        pass[a - 1] = true;
    }
    cin>>p;
    for (int i = 0; i < p; i++) {
        cin>>a;
        pass[a - 1] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!pass[i]) {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}