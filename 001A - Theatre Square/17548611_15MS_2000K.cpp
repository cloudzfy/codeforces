#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long n, m, a;
    while(scanf("%I64d%I64d%I64d", &n, &m, &a) != EOF) {
        if (n % a) n = n / a + 1;
        else n = n / a;
        if (m % a) m = m / a + 1;
        else m = m / a;
        printf("%I64d\n", n * m);
    }
    return 0;
}
