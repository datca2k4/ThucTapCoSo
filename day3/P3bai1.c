/*
 * P3bai1.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
#include <stdio.h>

// Khai bao cau truc addition
struct addition {
    int num1;
    int num2;
    int sum;
};

int main() {
    struct addition data;

    // Nhap du lieu tu nguoi dung
    printf("Nhap so thu nhat: ");
    scanf("%d", &data.num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &data.num2);

    // Tinh tong va gan vao sum
    data.sum = data.num1 + data.num2;

    // In ket qua
    printf("Tong cua %d va %d la: %d\n", data.num1, data.num2, data.sum);
getchar();
getchar();
    return 0;
}


