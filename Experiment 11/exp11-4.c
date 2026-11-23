/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int *findmax(int arr[], int n)
{
    int *max = &arr[0];     
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            max = &arr[i]; 
    }
    return max;
}

int main()
{
    int a[50], n, i;
    int *p;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = findmax(a, n);      

    printf("Maximum number is %d\n", *p);
    printf("It is at index %ld\n", (long)(p - a));   
    return 0;
}