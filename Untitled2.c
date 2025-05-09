#include <stdio.h>

int main() {
  int a;
  int b;

  printf("Nhap gia tri khoi tao cho so nguyen: ");
  scanf("%d", &a);

  printf("Nhap mot so nguyen: ");
  scanf("%d", &b);

  printf("Cac so tu %d den %d theo thu tu tang dan la: ", a, b);
  if (a <= b) {
  	int i; 
    for (i = a; i <= b; i++) {
      printf("%d ", i);
    }
  } else {
  	int i; 
    for (i = a; i >= b; i--) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
