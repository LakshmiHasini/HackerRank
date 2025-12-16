#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int num;
    if (n % 2 == 0) {
        num = n;
    } else {
        num = n * 2;
    }
    printf("%d\n",num);

    return 0;
}
