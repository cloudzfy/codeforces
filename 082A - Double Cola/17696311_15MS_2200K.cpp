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
    string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin>>n;
    int x = 1;
    while (n - 5 * (x * 2 - 1) > 0) x*=2;
    int idx = (n - 5 * (x - 1) - 1) / x;
    cout<<name[idx]<<endl;
    return 0;
}