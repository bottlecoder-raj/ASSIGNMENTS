#include <stdio.h>

int main() {
    int num1[5];  // Declares an integer array named "numbers" with space for 5 elements.

    int num2[5] = {1, 2, 3, 4, 5};  // Static initialization of array "numbers"

     int num3[5];  // Declares the array without initialization

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num3[i]);  // Takes input for each element, dynamically initializing the array
    }
    return 0;
}
