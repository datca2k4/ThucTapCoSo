/*
 * bai5.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    int tuoi;

    printf("Nhap do tuoi cua ban: ");
    scanf("%d", &tuoi);

    if (tuoi >= 18) {
        printf("Ban du dieu kien bo phieu.\n");
    } else {
        printf("Ban KHONG du dieu kien bo phieu.\n");
    }
getchar();
getchar();
    return 0;
}


