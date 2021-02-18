#include <stdio.h>
#include <stdlib.h>

int factorial(int);
void upAndDown(int);

int main(void) {
    int j = 0;

    for (j = 0; j < 8; ++j) {
        printf("%d! = %d\n", j, factorial(j));       
    }

    upAndDown(1);
    
    return 0;
}

int factorial(int n) {
    int result = 0;

    if (n == 0) {
        result = 1;
    }
    else {
        result = n * factorial(n - 1);
    }

    return result;
}

void upAndDown(int n) {
    printf("Level %d: n location %p\n", n, &n); // 1

    if (n < 4) {
        upAndDown(n + 1);
        printf("LEVEL %d: n location %p\n", n, &n); // 2
    }
}