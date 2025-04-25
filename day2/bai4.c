/*
 * bai4.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

void inNhiPhan(unsigned int so) {
    for (int i = 15; i >= 0; i--) {
        printf("%d", (so >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int duLieu = 0x4F63;
    unsigned int giaTriMoi = 0x3E;
    unsigned int mask = ~(0x3F << 5);

    printf("Gia tri ban dau: 0x%X\n", duLieu);
    printf("Dang nhi phan truoc khi set: ");
    inNhiPhan(duLieu);

       duLieu = duLieu & mask;

    duLieu = duLieu | (giaTriMoi << 5);

    printf("Gia tri sau khi set bit [10:5]: 0x%X\n", duLieu);
    printf("Dang nhi phan sau khi set: ");
    inNhiPhan(duLieu);
getchar();
getchar();
    return 0;
}


