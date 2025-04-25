/*
 * bai6.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    int n1, n2;


    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so thu hai: ");
    scanf("%d", &n2);


    if (n1 > n2) {
        printf("So lon hon la: %d\n", n1);
    } else if (n2 > n1) {
        printf("So lon hon la: %d\n", n2);
    } else {
        printf("Ca hai so deu bang nhau.\n");
    }
getchar();
getchar();
return 0;
}


