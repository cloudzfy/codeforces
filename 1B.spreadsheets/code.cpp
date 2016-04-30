#include <stdio.h>
#include <string>

using namespace std;

bool isRC(char str[]) {
    if (str[0] != 'R') return false;
    int count = 0;
    for (int i = 1; str[i] != 0; i++) {
        if (str[i] == 'C') {
            if (count) return true;
            return false;
        }
        else if (str[i] <= '9' && str[i] >= '0') count++;
        else return false;
    }
    return false;
}
int main(int argc, const char * argv[]) {
    int n;
    char str[50];
    char ch;
    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        if (isRC(str)) {
            int r, c;
            sscanf(str, "%c%d%c%d",&ch, &r, &ch, &c);
            string col;
            while (c) {
                if (c % 26 == 0) {
                    ch = 'Z';
                    c = (c - 26) / 26;
                } else {
                    ch = c % 26 - 1 + 'A';
                    c = (c - c % 26) / 26;
                }
                col = ch + col;
            }
            printf("%s%d\n",&col[0], r);
        } else {
            int i;
            int c = 0;
            for (i = 0; str[i] != 0; i++) {
                if (str[i] < 'A' || str[i] > 'Z') break;
                c *= 26;
                c += str[i] - 'A' + 1;
            }
            int r = 0;
            for (; str[i] != 0; i++) {
                r *= 10;
                r += str[i] - '0';
            }
            printf("R%dC%d\n", r, c);
        }
    }
    return 0;
}
