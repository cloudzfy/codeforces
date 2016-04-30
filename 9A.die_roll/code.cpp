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
    int Y, W;
    cin>>Y>>W;
    if (max(Y, W) == 1) cout<<"1/1"<<endl;
    else if (max(Y, W) == 2) cout<<"5/6"<<endl;
    else if (max(Y, W) == 3) cout<<"2/3"<<endl;
    else if (max(Y, W) == 4) cout<<"1/2"<<endl;
    else if (max(Y, W) == 5) cout<<"1/3"<<endl;
    else if (max(Y, W) == 6) cout<<"1/6"<<endl;
    else cout<<"0/1"<<endl;
    return 0;
}
