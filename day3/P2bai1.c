/*
 * P2bai1.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Trong ham swapByValue: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Ban dau: x = %d, y = %d\n", x, y);

    // Goi hoan doi bang gia tri
    swapByValue(x, y);
    printf("Sau swapByValue: x = %d, y = %d (khong thay doi)\n", x, y);

    // Goi hoan doi bang tham chieu
    swapByReference(&x, &y);
    printf("Sau swapByReference: x = %d, y = %d (da thay doi)\n", x, y);
getchar();
getchar();
    return 0;
}


