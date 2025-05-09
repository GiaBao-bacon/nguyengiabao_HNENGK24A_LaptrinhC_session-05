#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen tu 1 den 10: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 10) {
    	int i; 
        for (i = 1; i <= 10; i++) {
        	int j; 
            for (j = 1; j <= n; j++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    } else {
        printf("So khong hop le\n");
    }
    return 0;
}
