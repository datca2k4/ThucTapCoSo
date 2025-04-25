/*
 * bai8.c
 *
 *  Created on: Mar 31, 2025
 *      Author: gau
 */
#include <stdio.h>
#include <math.h>

int main() {
    char ma;
    double dientich;

    printf("Nhap ma tuong ung de tinh dien tich hinh hoc:\n");
    printf("'t' - Hinh tam giac\n'z' - Hinh thang\n'c' - Hinh tron\n's' - Hinh vuong\n'r' - Hinh chu nhat\n");
    printf("Nhap ma: ");
    scanf(" %c", &ma);

    switch (ma) {
        case 't': {
            double a, h;
            printf("Nhap do dai day (a): ");
            scanf("%lf", &a);
            printf("Nhap chieu cao (h): ");
            scanf("%lf", &h);
            dientich = 0.5 * a * h;
            break;
        }
        case 'z': {
            double a, b, h;
            printf("Nhap do dai day lon (a): ");
            scanf("%lf", &a);
            printf("Nhap do dai day nho (b): ");
            scanf("%lf", &b);
            printf("Nhap chieu cao (h): ");
            scanf("%lf", &h);
            dientich = 0.5 * (a + b) * h;
            break;
        }
        case 'c': {
            double r;
            printf("Nhap ban kinh (r): ");
            scanf("%lf", &r);
            dientich = M_PI * r * r;
            break;
        }
        case 's': {
            double a;
            printf("Nhap do dai canh (a): ");
            scanf("%lf", &a);
            dientich = a * a;
            break;
        }
        case 'r': {
            double a, b;
            printf("Nhap chieu dai (a): ");
            scanf("%lf", &a);
            printf("Nhap chieu rong (b): ");
            scanf("%lf", &b);
            dientich = a * b;
            break;
        }
        default:
            printf("Ma nhap khong hop le!\n");
            return 1;
    }

    printf("Dien tich hinh la: %.2f\n", dientich);
getchar();
getchar();
    return 0;
}


