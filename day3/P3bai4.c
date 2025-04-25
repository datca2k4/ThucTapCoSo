/*
 * P3bai4.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
#include <stdio.h>

// Khai bao cau truc thong tin nguoi dung
struct NguoiDung {
    char hoTen[100];
    int tuoi;
    char gioiTinh[10];
    char thanhPho[50];
    int maBuuDien;
    char honNhan[20];
    float mucLuong;
};

int main() {
    struct NguoiDung nd;

    // Nhap thong tin nguoi dung
    printf("===== FORM DANG KY =====\n");

    printf("Ho ten: ");
    fgets(nd.hoTen, sizeof(nd.hoTen), stdin);

    printf("Tuoi: ");
    scanf("%d", &nd.tuoi);
    getchar(); // Xoa ky tu '\n' sau scanf

    printf("Gioi tinh: ");
    fgets(nd.gioiTinh, sizeof(nd.gioiTinh), stdin);

    printf("Thanh pho: ");
    fgets(nd.thanhPho, sizeof(nd.thanhPho), stdin);

    printf("Ma buu dien: ");
    scanf("%d", &nd.maBuuDien);
    getchar();

    printf("Tinh trang hon nhan: ");
    fgets(nd.honNhan, sizeof(nd.honNhan), stdin);

    printf("Muc luong: ");
    scanf("%f", &nd.mucLuong);

    // In thong tin vua nhap
    printf("\n===== THONG TIN DA DANG KY =====\n");
    printf("Ho ten: %s", nd.hoTen);
    printf("Tuoi: %d\n", nd.tuoi);
    printf("Gioi tinh: %s", nd.gioiTinh);
    printf("Thanh pho: %s", nd.thanhPho);
    printf("Ma buu dien: %d\n", nd.maBuuDien);
    printf("Tinh trang hon nhan: %s", nd.honNhan);
    printf("Muc luong: %.2f\n", nd.mucLuong);
getchar();
    return 0;
}


