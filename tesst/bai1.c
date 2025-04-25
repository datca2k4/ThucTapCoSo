/*
 * bai1.c
 *
 *  Created on: Apr 4, 2025
 *      Author: gau
 */
#include <stdio.h>
int main(void){
	long long int * address = (long long int*)  0x00007FFF8E3C3825;
	char data = 0x25;
	  printf("Gia tri dia chi: %lld\n", *address);
	getchar();
	getchar();
}

