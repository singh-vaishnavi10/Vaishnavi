#include <stdio.h>
int main()
{
    int A[5], X;
    printf("Base Address : %u\n", A);
    printf("Address Of Element Present At A[2] : %u\n", &A[2]);
    X = (2 - 0);
    printf("Address Of Element Present At A[2] By The Help Of Index Formula: %u", A + X);
    return 0;
}