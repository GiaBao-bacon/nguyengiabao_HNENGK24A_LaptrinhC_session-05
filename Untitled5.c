#include <stdio.h>

int main() {
	int i; 
    for (i = 1; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        int j; 
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
