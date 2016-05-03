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
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while (t--) {
        for (int i = n - 1; i > 0; i--) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                swap(s[i], s[i - 1]);
                i--;
            }
        }
    }
    cout<<s<<endl;
}