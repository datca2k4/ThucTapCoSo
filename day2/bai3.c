/*
 * bai3.c
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

    printf("Nhap mot so nguyen khong dau: ");
    scanf("%u", &so);

    printf("Gia tri ban dau o dang nhi phan: ");
    inNhiPhan(so);

    so = so & ~(1 << 4);
    so = so & ~(1 << 5);
    so = so & ~(1 << 6);


    printf("Gia tri sau khi xoa bit 4, 5, 6: %u\n", so);
    printf("Dang nhi phan sau khi xoa bit: ");
    inNhiPhan(so);
getchar();
getchar();
    return 0;
}


