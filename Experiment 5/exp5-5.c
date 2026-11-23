
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main()
{
    int n, i, insert, position;
    
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d", &n);
    
    printf("\nEnter number of element you want to insert :");
    scanf("%d", &insert);

    
    int a[n + insert];
    
    printf("\nENTER ELEMENTS OF ARRAY\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("Your array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }

    printf("\n\nSelect position where you want to insert number :");
    scanf("%d", &position);
    printf("\n");
    position--;

    // Shift elements RIGHT
    for (i = n - 1; i >= position; i--)
    {
        a[i + insert] = a[i];
    }

    // Insert new elements
    for (i = position; i < position + insert; i++)
    {
        printf("Enter element which you want to insert at %dth position: ", i + 1);
        scanf("%d", &a[i]);
    }

    n = n + insert;
    //printing updated array
    printf("\nUpdated array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }

    return 0;
}