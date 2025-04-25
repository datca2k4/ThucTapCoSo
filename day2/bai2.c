/*
 * bai2.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

void inNhiPhan(unsigned int so) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (so >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int so;


    printf("Nhap mot so nguyen: ");
    scanf("%u", &so);

    printf("Gia tri ban dau o dang nhi phan: ");
    inNhiPhan(so);


    so = so | (1 << 4);
    so = so | (1 << 7);

    printf("Gia tri sau khi bat bit 4 va 7: %u\n", so);
    printf("Dang nhi phan sau khi bat bit: ");
    inNhiPhan(so);
getchar();
getchar();
    return 0;
}


