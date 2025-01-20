#include <stdio.h>

int main() {
    int A = 3, B = 6;

    printf("Before swapping: A = %d, B = %d\n" , A, B);

    //swap the numbers using arithmetic operations
    A = A + B;
    B = A - B;
    A = A - B;

    printf("After swapping: A = %d %d\n", A, B);

    return 0;
}