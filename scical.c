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
		    case 4:
                if (num2 != 0)
                    result = num1 / num2;
		else {
                    printf("Error: Division by zero\n");
                    return 1;
                }
		break;
        }
        printf("Result: %.2lf\n", result);
	} else if (choice >= 5 && choice <= 10) {
        printf("Enter a number: ");
        scanf("%lf", &num1);
	switch (choice) {
            case 5: result = sin(num1); break;
            case 6: result = cos(num1); break;
            case 7: result = tan(num1); break;
            case 8: result = exp(num1); break;
            case 9:
		    if (num1 > 0)
                    result = log(num1);
                else {
                    printf("Error: Logarithm of non-positive number\n");
                    return 1;
                }
                break;
		case 10:
                if (num1 >= 0)
                    result = sqrt(num1);
                else {
                    printf("Error: Square root of negative number\n");
                    return 1;
                }
                break;
		}
        printf("Result: %.2lf\n", result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
