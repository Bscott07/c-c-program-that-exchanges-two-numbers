#include <stdio.h>

int main() {
    int A = 3, B = 6;
    int *ptrA = &A, *ptrB = &B;

    printf("Before swapping: A = %d, B = %d\n", A, B);

    //Swap the numbers using pointers
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    ptintf("After swapping: A =%d, B = %d\n" A, B);

    return 0;
}