#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    printf("Uoc chung lon nhat la: %d\n", a);

    return 0;
}
