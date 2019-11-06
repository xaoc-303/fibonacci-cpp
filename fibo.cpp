#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long f1(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return f1(n-1) + f1(n-2);
}

long f2(int n) {
    long a = 0;
    long b = 1;

    for (int i = 2; i <= n; ++i) {
        long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

long start(char *f, int n) {

    if (strncmp(f, "f1", 2) == 0) {
        return f1(n);
    }

    if (strncmp(f, "f2", 2) == 0) {
        return f2(n);
    }

    return 0;
}

int main(int argc, char *argv[]) {

    char *f = argv[1];
    int n = atoi(argv[2]);

	printf("%ld\n", start(f, n));

	return 0;
}
