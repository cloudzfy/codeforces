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
    int n;
    double p, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &p);
        sum += p;
    }
    printf("%.10f\n", sum / n);
    return 0;
}