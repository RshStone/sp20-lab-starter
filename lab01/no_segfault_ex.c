#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    unsigned total = 0;
	printf("size of a: %d\n", sizeof(a));
    for (int j = 0; j < sizeof(a)/sizeof(int); j++) {
        total += a[j];
        printf("%d\n",total);
    }
    printf("sum of array is %d\n", total);
}
