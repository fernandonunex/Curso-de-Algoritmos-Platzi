/*   1.- Comenzamos a hacer la comparacion de elementos adyacentes
    2.- Repetimos hasta tener una pasada completa sin ningun swap */

#include<stdio.h>

void change_position(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubble_sort( int entry_vector[], int n)
{
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (entry_vector[j]<entry_vector[j+1])
            change_position(&entry_vector[j], &entry_vector[j+1]);
            printf("\n %d", entry_vector[j]);
        }
        
    }
    
}

int print_array(int entry_vector[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ,", entry_vector[i]);
    }
    printf("\n End of ordering");
    

}

int main(int argc, char const *argv[])
{
    int entry_vector[]= {100,1992,0,5,-1,60,70,14,15,10};
    int n = sizeof(entry_vector)/sizeof(entry_vector[0]);
    bubble_sort(entry_vector, n);
    print_array(entry_vector, n);
    printf("\n");
    return 0;
}
