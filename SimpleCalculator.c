#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main ()
{  
    int n1;
    int n2;
    int op;
    char c ='Y';
    
    while(c == 'Y'){
        

        printf("------SIMPLE CALCULATOR------\n");
        printf("Choose an operation\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exponentiation\n");
        printf("[6] Square root\n");

        printf("Enter: ");
        scanf ("%d", &op);
            switch (op){
                case 1: {
                    printf("Enter the numbers you want to add\n");
                    scanf("%d", &n1);
                    scanf("%d", &n2);

                    int r = n1 + n2;

                    printf("%d + %d = %d\n", n1, n2, r);
                    break;
                }
                case 2: {
                    printf("Enter the numbers you want to subtract\n");
                    scanf("%d", &n1);
                    scanf("%d", &n2);

                    int r = n1 - n2;

                    printf("%d - %d = %d\n",n1, n2, r);
                }
                    break;
                case 3: {
                    printf("Enter the numbers you want to multiply\n");
                    scanf("%d", &n1);
                    scanf("%d", &n2);

                    int r = n1 * n2;

                    printf("%d x %d = %d\n", n1, n2, r);
                    break;
                }
                case 4: {
                    printf("Enter the numbers you want to divide\n");
                    scanf("%d", &n1);
                    scanf("%d", &n2);

                    float r = n1 / (float)n2;

                    printf("%d / %d = %.2f\n", n1, n2, r);
                    break;
                }
                case 5: {
                    printf("Enter the numbers you want to pow\n");
                    scanf("%d", &n1);
                    scanf("%d", &n2);

                    int r = pow(n1, n2);

                    printf("%d ^ %d = %d\n", n1, n2, r);
                    break;
                }
                case 6: {
                    printf("Enter the number you want to find the square root of\n");
                    scanf("%d", &n1);

                    float r = sqrt(n1);

                    printf("square root of %d = %.2f\n", n1, r);
                    break;
                }
                default: {
                    printf("Please enter a valid operation!\n");
                }
            }
        printf("Do you want to continue yes or no?[Y/N]:");
        scanf (" %c", &c);

        }
        return (0);
    }