#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"

// Function prototype declaration
void addition();
void subraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();

// Start of Main Program
int main()
{
    int x = 1;
    char Calc_oprm;

    // Function call
    calculator_operations();

    while(x)
    {
        printf("\n");
        printf("%s", KEY);

        Calc_oprm = getchar();

        switch(Calc_oprm)
        {
            case '+': addition();break;
            case '-': subraction();break;
            case '*': multiplication();break;
            case '/': division();break;
            case '?': modulus();break;
            case '!': factorial();break;
            case '^': power();break;
            case 'H':
            case 'h': calculator_operations();break;
            case 'Q':
            case 'q': return (0);break;
            case 'C':
            case 'c': system("clear");calculator_operations();break;
            //default: system("clear");

            printf("\n**********You have enterede unavailable option");
            printf("**********\n");
            printf("\n*****Please Enter any one of below avaible");
            printf("Options*****\n");

            calculator_operations();
        }
    }
}

// Function Definitions

void calculator_operations()
{
    //system("clear"); use system function to clear
    //screen instead of clrscr();
    printf("\n\t\t\t\tWelcome to C calculator\n\n");

    printf("****** Pres 'Q' or 'q' to quit");
    printf("the program ******\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display avaible option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtration \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Division \n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void addition()
{
    int n, total=0, k=0, number;
    
    printf("\nEnter the number fo elements you want to add: ");
    scanf("%d", &n);
    printf("Please enter %d numbers one by one: \n", n);

    while(k<n)
    {
        scanf("%d", &number);
        total = total + number;
        k++;
    }
    printf("Sum of %d numbers = %d\n", n, total);
}

void subraction()
{
    int a, b, c = 0;

    printf("\nPlease enter first number: ");
    scanf("%d", &a);
    printf("Please eneter second number: ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d = %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul = 0;

    printf("\nPlease enter first numb: ");
    scanf("%d", &a);
    printf("Please enter sencond number: ");
    scanf("%d", &b);
    mul = a*b;
    printf("\nMultiplication of entered numbers = %d\n", mul);
}

void division()
{
    int a, b, d = 0;

    printf("\nPlease enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    d = a/b;
    printf("\nDivision of entered numbers = %d\n", d);
}

void modulus()
{
    int a, b, d = 0;

    printf("\nPlease enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    d = a%b;
    printf("\nModulus of entered numbers = %d\n", d);
}

void power()
{
    double a, num, p;

    printf("\nEnter two numbers to find the power.\n");
    printf("Number: ");
    scanf("%lf", &a);
    printf("Power: ");
    scanf("%lf", &num);

    p = pow(a, num);

    printf("\n%lf to find power %lf = %lf \n", a, num, p);
}

int factorial()
{
    int fact = 1, num;

    printf("\nEnter a number to find factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again.\n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0\n");

        return (1);
    }

    for (int i = 1; i <= num; i++)
        fact *= i;

    printf("\n");
    printf("Factorial of entered number %d is: %d\n", num, fact);

    return (0);
}
