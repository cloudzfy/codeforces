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
    int X = 0;
    string s;
    for (int i = 0; i < n; i++) {
        cin>>s;
        if (s == "X++" || s == "++X") X++;
        else X--;
    }
    cout<<X<<endl;
}