/*
 * bai1.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);


    if (n % 2 == 0) {
        printf("%d la so chan\n", n);
    } else {
        printf("%d la so le\n", n);
    }
getchar();
getchar();
    return 0;
}


