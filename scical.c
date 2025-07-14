#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Scientific Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Sine\n6. Cosine\n7. Tangent\n8. Exponential\n");
    printf("9. Logarithm\n10. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
	switch (choice) {
		case 1: result = num1 + num2; break;
            case 2: result = num1 - num2; break;
            case 3: result = num1 * num2; break;
