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
    string str;
    cin>>str;
    char cur = 0;
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (cur != str[i]) {
            cur = str[i];
            count = 1;
        } else count++;
        if (count == 7) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}