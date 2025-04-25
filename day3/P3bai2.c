#include <stdio.h>

// Khai bao cau truc rectangle
struct Rectangle {
    float chieuDai;
    float chieuRong;
    float dienTich;
};

int main() {
    struct Rectangle hcn;

    // Nhap du lieu tu nguoi dung
    printf("Nhap chieu dai: ");
    scanf("%f", &hcn.chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &hcn.chieuRong);

    // Tinh dien tich
    hcn.dienTich = hcn.chieuDai * hcn.chieuRong;

    // In ket qua
    printf("Chieu dai: %.2f\n", hcn.chieuDai);
    printf("Chieu rong: %.2f\n", hcn.chieuRong);
    printf("Dien tich hinh chu nhat: %.2f\n", hcn.dienTich);
getchar();
getchar();

    return 0;
}
