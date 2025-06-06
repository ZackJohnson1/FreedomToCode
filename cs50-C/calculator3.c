#include <stdio.h>
#include <ctype.h> // for toupper

// Function prototypes
char get_operation(void);
void perform_addition(int a, int b);
void perform_subtraction(int a, int b);
void perform_multiplication(int a, int b);
void perform_division(int a, int b);

int main(void) 
{
    int x, y;
    char choice;

    printf("Enter the first number: ");
    scanf("%d", &x);

    choice = get_operation();

    printf("Enter the second number: ");
    scanf("%d", &y);

    switch (choice) {
        case 'A':
            perform_addition(x, y);
            break;
        case 'S':
            perform_subtraction(x, y);
            break;
        case 'M':
            perform_multiplication(x, y);
            break;
        case 'D':
            perform_division(x, y);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


char get_operation(void) 
{
    char op;
    printf("Choose an operation (A = Addition, S = Subtraction, M = Multiplication, D = Division): ");
    scanf(" %c", &op);
    return toupper(op);  // Normalize to uppercase so main doesn't need to handle cases
}

void perform_addition(int a, int b) 
{
    printf("Result: %d\n", a + b);
}

void perform_subtraction(int a, int b) 
{
    printf("Result: %d\n", a - b);
}

void perform_multiplication(int a, int b) 
{
    printf("Result: %d\n", a * b);
}

void perform_division(int a, int b) 
{
    if (b != 0)
        printf("Result: %.2f\n", (float)a / b);
    else
        printf("Error: Cannot divide by zero.\n");
}