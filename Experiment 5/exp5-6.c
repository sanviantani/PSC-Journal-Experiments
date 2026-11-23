
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() 
{
    int n, i, delete;
    
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d", &n);
    int a[n];
    
    printf("\nENTER ELEMENTS OF ARRAY\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("\nYour array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }
    
    printf("\n\nEnter number of particular element you want to delete : ");
    scanf("%d",&delete);
    delete--;
    printf("\nNumber you selected to delete is %d",a[delete]);
    for ( i = delete; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;

    printf("\n\nYour updated array is :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
        if (i < n - 1)
            printf(",");
    }
    return 0;
}