/*
 * bai10.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    int count = 0;

    printf("Cac so chan tu 0 den 100:\n");

    for (int i = 0; i <= 100; i += 2) {
        printf("%d ", i);
        count++;
    }

    printf("\nTong so luong so chan: %d\n", count);
getchar();
getchar();
    return 0;
}


