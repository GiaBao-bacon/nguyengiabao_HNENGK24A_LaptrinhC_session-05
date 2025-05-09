#include <stdio.h>

int main() {
    int n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    int i; 
    for (i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong tu 1 den %d la: %d\n", n, tong);
    return 0;
}
