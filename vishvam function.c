#include <stdio.h>

int square(int num); // Function prototype

int main() {
    int result;
    printf("Calculate the square of 2 numbers\n");

    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = square(num1) + square(num2);

    printf("Result: %d\n", result);
    return 0;
}

int square(int num) {
    return num * num;
}
