#include<stdio.h>
int arr[20];
/* 3, 94, 86, 82, 90,
    10, 87, 36, 61, 8,
    17, 15, 22, 10, 23,
    78, 25, 2, 30, 45,
    98, 43, 98, 59, 53,
    57, 2, 64, 1, 41,
    32, 58, 19, 99,60,
    74, 48, 80, 44, 25,
    68, 1, 89, 77, 60,
    25, 99, 30, 76, 32,
    57, 82, 52, 44, 72,
    87, 34, 87, 65, 30,
    54, 6, 31, 33, 44,
    44, 42, 82, 90, 17,
    9, 98, 28, 86, 69,
    3, 17, 8, 45, 98,
    12, 47, 95, 43, 72,
    39, 41, 82, 74, 56,
    65, 79, 50, 26, 67,
    100, 24, 67, 38, 5 */

int merge(int arr[], int l, int m, int h){
    // two temporary arr to hold the arrs to be merged
    int arr1[10],arr2[10]; 
    int n1, n2, i, j, k;
    n1 = m-l+1;
    n2 = h-m;

    for ( i = 0; i < n1; i++)
        arr1[i]= arr[l+i];
    for ( j = 0; j < n2; j++)
        arr2[j] =  arr[m+j+1];
    
    arr1[i]= 9999;
    arr2[j]= 9999;
    
    i = 0;
    j=0;
    for ( k = l; k <= h; k++)
    {
        if(arr1[i]<=arr2[j])
            arr[k] = arr1[i++];
        else
            arr[k]=arr2[j++];        
    }
    return 0;
}

int mergeSort(int arr[], int low, int high){
    int middle;
    if (low<high){
        middle = (low+high)/2;
        // Divide and conquer
        mergeSort(arr,low,middle);
        mergeSort(arr, middle+1,high);
        // Combine
        merge(arr,low,middle,high);
    }

}


int main()
{
    int n,i;

    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements:");
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr,0,n-1);

    printf("Stored array:\n");
    for ( i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("\n");
        

    return 0;
}
