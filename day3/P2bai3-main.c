/*
 * P2bai3-main.c
 *
 *  Created on: Apr 18, 2025
 *      Author: gau
 */
// main.c
#include <stdio.h>
#include<stdlib.h>
#include "math.h"  // Gọi header file

int main() {
    int x = 10, y = 3;
    // In gia tri
    printf("Cong: %d + %d = %d\n", x, y, cong(x, y));
    printf("Tru: %d - %d = %d\n", x, y, tru(x, y));
    printf("Nhan: %d * %d = %d\n", x, y, nhan(x, y));
    printf("Chia: %d / %d = %.2f\n", x, y, chia(x, y));
	system("pause");
	getchar();
	return 0;
}

