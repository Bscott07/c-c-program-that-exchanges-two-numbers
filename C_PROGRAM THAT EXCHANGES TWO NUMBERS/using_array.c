#include <stdio.h>

int main() {
    int arr[2] = {3,6};

    printf("Before swapping: A = %d, B = %d\n", arr[0],arr[1]);

    //swap the numbers using the array
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    printf("After swapping: A = %d, B = %d\n",arr[0],arr[1]);

    return 0;
}