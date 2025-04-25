/*
 * bai3.c
 *
 *  Created on: Apr 4, 2025
 *      Author: gau
 */
#include <stdio.h>

long long int data = 0x00007FFF8E3C3825;

int main(void) {
    char *pAddress = (char*)&data;

    printf(" Before Value of address %p\n", pAddress);
    printf("Value at address %p is %x\n", pAddress, *pAddress);

    *pAddress = 0x89;

    printf(" after Value of address %p\n", pAddress);
    printf("Value at address %p is %x\n", pAddress, (unsigned char) *pAddress);


    //pAddress = pAddress + 1;

    //printf("Value of address %p\n", pAddress);
    //printf("Value at address %p is %x\n", pAddress, *pAddress);
    getchar();
    return 0;
}

