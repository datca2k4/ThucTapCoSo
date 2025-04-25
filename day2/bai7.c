/*
 * bai7.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    double thuNhap, thueSuat, thuePhaiNop;

    printf("Nhap tong thu nhap (VND/năm): ");
    scanf("%lf", &thuNhap);

    if (thuNhap <= 5000000) {
        thueSuat = 0;
    } else if (thuNhap <= 10000000) {
        thueSuat = 5;
    } else if (thuNhap <= 15000000) {
        thueSuat = 5;
    } else if (thuNhap <= 20000000) {
        thueSuat = 10;
    } else {
        thueSuat = 15;
    }


    thuePhaiNop = thuNhap * (thueSuat / 100);

    printf("Thue suat ap dung: %.2f%%\n", thueSuat);
    printf("So thue phai nop: %.2f VND\n", thuePhaiNop);
getchar();
getchar();
    return 0;
}


