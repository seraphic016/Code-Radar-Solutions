#include <stdio.h>
int main() {
    float num;
    printf("enter a floating-point number: ");
    scanf("%f", &num);
    printf("you entered: %.2f\n", num);
    return 0;
}