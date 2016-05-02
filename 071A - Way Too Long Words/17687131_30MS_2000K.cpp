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
    string word;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>word;
        if (word.length() > 10) {
            cout<<word[0];
            cout<<word.length() - 2;
            cout<<word[word.length() - 1];
        } else {
            cout<<word;
        }
        cout<<endl;
    }
    return 0;
}