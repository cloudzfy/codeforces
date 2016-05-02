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
    int d, sumtime;
    int mintime, maxtime;
    cin>>d>>sumtime;
    vector<int> rest(d, 0);
    vector<int> schedule(d, 0);
    for (int i = 0; i < d; i++) {
        cin>>mintime>>maxtime;
        sumtime -= mintime;
        rest[i] = maxtime - mintime;
        schedule[i] = mintime;
    }
    if (sumtime < 0) cout<<"NO"<<endl;
    else {
        for (int i = 0; i < d; i++) {
            schedule[i] += min(sumtime, rest[i]);
            sumtime -= min(sumtime, rest[i]);
            if (sumtime == 0) break;
        }
        if (sumtime > 0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for (int i = 0; i < d; i++) {
                if (i != 0) cout<<" ";
                cout<<schedule[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
