/*
 * bai1.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
#include <stdio.h>
#include <stdlib.h>

// Khai báo cấu trúc rectangle
struct rectangle {
    float chieuDai;
    float chieuRong;
    float dienTich;
};

int main() {
    struct rectangle hcn;

    // Nhập dữ liệu
    printf("Nhap chieu dai: ");
    scanf("%f", &hcn.chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &hcn.chieuRong);

    // Tính diện tích
    hcn.dienTich = hcn.chieuDai * hcn.chieuRong;

    // In kết quả
    printf("Dien tich hinh chu nhat: %.2f\n", hcn.dienTich);

    system("pause");
    getchar();
    return 0;
}

