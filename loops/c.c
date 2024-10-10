#include <stdio.h>

int main() {
    char family[4][100] = {
        "mom","dad","sister","other sister"
    };

    // helloss
    for (int i = 0; i < 4; i++) {
        printf("hello %s!\n", family[i]);
    };

    return 0;
}