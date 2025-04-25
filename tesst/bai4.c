/*
 * bai4.c
 *
 *  Created on: Apr 4, 2025
 *      Author: gau
 */
#include <stdio.h>

int main() {
    // Buoc 1: Tao bien kieu char va khoi tao gia tri 100
    char var = 100;

    // Buoc 2: In gia tri va dia chi cua bien tren
    printf("Gia tri ban dau cua var: %d\n", var);
    printf("Dia chi cua var: %p\n", (void*)&var);

    // Buoc 3: Tao con tro va luu dia chi cua bien tren
    char *ptr = &var;

    // Buoc 4: Doc 1 byte du lieu tu con tro
    char value = *ptr;

    // Buoc 5: In du lieu vua doc duoc
    printf("Gia tri doc tu con tro: %d\n", value);

    // Buoc 6: Ghi gia tri 65 vao vi tri bo nho thong qua con tro
    *ptr = 65;

    // Buoc 7: In gia tri moi cua bien ban dau
    printf("Gia tri moi cua var: %d\n", var);
getchar();
getchar();
    return 0;
}


