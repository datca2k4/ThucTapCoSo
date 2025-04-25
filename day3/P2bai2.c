/*
 * P2bai2.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
#include <stdio.h>

// Ham tinh tong va tich, ket qua duoc luu vao 2 bien thong qua con tro
void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1 = 5, num2 = 3;
    int tong, tich;

    calculateSumAndProduct(num1, num2, &tong, &tich);

    printf("Tong = %d\n", tong);
    printf("Tich = %d\n", tich);

    getchar();
    getchar();

    return 0;
}


