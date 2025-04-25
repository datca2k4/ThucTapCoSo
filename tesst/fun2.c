/*
 * fun2.c
 *
 *  Created on: Apr 4, 2025
 *      Author: gau
 */
#include "math.h"

// Ham cong
int add(int a, int b) {
    return a + b;
}

// Ham tru
int subtract(int a, int b) {
    return a - b;
}

// Ham nhan
int multiply(int a, int b) {
    return a * b;
}

// Ham chia (kiem tra chia cho 0)
float divide(int a, int b) {
    if (b == 0) {
        return 0; // Tranh loi chia cho 0
    }
    return (float)a / b;
}



