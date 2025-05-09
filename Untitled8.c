#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }

    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("Boi chung nho nhat la: %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
