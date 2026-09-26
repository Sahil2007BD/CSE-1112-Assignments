#include <stdio.h>

int main(void) {
    float x, y;
    char a;

    printf("Enter expression in the form: number operator number\n");
    printf("Example: 5 + 2\n");
    printf("=> ");

    if (scanf("%f %c %f", &x, &a, &y) != 3) {
        printf("Error: invalid input format. Use: 5 + 2\n");
        return 1;
    }

    switch (a) {
        case '+':
            printf("%.2f\n", x + y);
            break;
        case '-':
            printf("%.2f\n", x - y);
            break;
        case '*':
            printf("%.2f\n", x * y);
            break;
        case '/':
            if (y == 0) {
                printf("Error: division by zero\n");
                return 1;
            }
            printf("%.2f\n", x / y);
            break;
        default:
            printf("Error: invalid operator\n");
            return 1;
    }

    return 0;
}