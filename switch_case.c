#include <stdio.h>

int main()
{
    int choice;

    printf("===== MENU =====\n");
    printf("1. Simple Calculator\n");
    printf("2. Multiplication Table\n");
    printf("3. Array\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int a, b;
            char op;

            printf("Enter expression: ");
            scanf("%d %c %d", &a, &op, &b);

            switch(op)
            {
                
                case '+':
                    printf("Result = %d\n", a + b);
                    break;

                case '-':
                    printf("Result = %d\n", a - b);
                    break;

                case '*':
                    printf("Result = %d\n", a * b);
                    break;

                case '/':
                    if(b != 0)
                        printf("Result = %.2f\n", (float)a / b);
                    else
                        printf("Division by zero not allowed\n");
                    break;

                default:
                    printf("Invalid Operator\n");
            }
            break;
        }

        case 2:
        {
            int n, i;

            printf("Enter a number: ");
            scanf("%d", &n);

            printf("Multiplication Table of %d\n", n);

            for(i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", n, i, n * i);
            }
            break;
        }

        case 3:
        {
            int arr[5], i;

            printf("Enter 5 array elements:\n");

            for(i = 0; i < 5; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("Array Elements are: ");

            for(i = 0; i < 5; i++)
            {
                printf("%d ", arr[i]);
            }

            printf("\n");
            break;
        }

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}