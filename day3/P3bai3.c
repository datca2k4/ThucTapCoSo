#include <stdio.h>

// Khai bao cau truc Rectangle
struct Rectangle {
    int length;   // chieu dai
    int width;    // chieu rong
    int area;     // dien tich
};

// Ham tinh dien tich hinh chu nhat
void tinhDienTich(struct Rectangle *r) {
    r->area = r->length * r->width;
}

int main() {
    struct Rectangle hcn;

    // Nhap du lieu tu nguoi dung
    printf("Nhap chieu dai: ");
    scanf("%d", &hcn.length);

    printf("Nhap chieu rong: ");
    scanf("%d", &hcn.width);

    // Goi ham tinh dien tich
    tinhDienTich(&hcn);

    // In ket qua
    printf("Chieu dai = %d, chieu rong = %d\n", hcn.length, hcn.width);
    printf("Dien tich hinh chu nhat = %d\n", hcn.area);
getchar();
getchar();
    return 0;
}
