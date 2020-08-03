#include<stdio.h>

void factorialof(int number)
    {
        int i, total, n=1;
        for ( i = 1; i <= number; i++)
        {
            n = n * i;

        }
        printf("The factorial of %d is %d \n",number, n);
    }

int number,n;
int main(int argc, char const *argv[])
{
    printf("\n Entre a value: ");
    scanf("%d", &number);
    factorialof(number);
    return 0;
}
