#include<stdio.h>
long result;
int n;
long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n* factorial(n-1));
    
}

int main(int argc, char const *argv[])
{
    printf("Enter the number \n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The number should be bigger than 0 \n");
    }
    else
    {
        result = factorial(n);
        printf("%d! = %ld \n", n, result);
    }
    return 0;
}
