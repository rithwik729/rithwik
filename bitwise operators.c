#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBitwise AND: %d", a & b);
    printf("\nBitwise OR: %d", a | b);
    printf("\nBitwise XOR: %d", a ^ b);
    printf("\nLeft Shift of a: %d", a << b);
    printf("\nRight Shift of a: %d", a >> b);

    return 0;
}
