//#define _POSIX_C_SOURCE 199309L

//#if defined(__APPLE__)
//typedef long clock_t;
//#endif

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ctime>
//#include <stdio>
//#include <stdlib>
//#include <stdio>
//#include <string>

using namespace std;

//clock_t start, finish;

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

const std::clock_t timestamp1 = std::clock();

    if (strncmp(f, "f1", 2) == 0) {
        clock_t start, finish;

        start = clock();

        long result = f1(n);

        finish = clock() - start;
        float interval = finish / (float)CLOCKS_PER_SEC;

        printf("%10.8f seconds elapsed\n", interval);
        return result;
    }

    if (strncmp(f, "f2", 2) == 0) {
        clock_t start, finish;

        start = clock();

        long result = f2(n);

        finish = clock() - start;
        float interval = finish / (float)CLOCKS_PER_SEC;

        printf("%10.8f seconds elapsed\n", interval);
//        println("%.8f".format(duration.toDouble() / 1000000000))
        return result;
    }

    return 0;
}

int main(int argc, char *argv[]) {

    char *f = argv[1];
    int n = atoi(argv[2]);

    long q = start(f, n);

	printf("%ld\n", q);

	return 0;
}
