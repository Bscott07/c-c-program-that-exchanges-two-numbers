#include <stdio.h>

//function to swap two numbers
Void swap(int *a, int *b) {
    int temp =*a;
    *a = *b;
    *b = temp;
}

int main() {
    int A = 3, B = 6;

    printf("Before swapping: A = %d, B %d\n", A, B);

    //Swap the numbers using the swap function swap(&A, &B);

    printf("After swapping: A =%d, B = %d\n", A, B);

    return 0;
}