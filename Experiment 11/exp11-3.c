/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int *p1, *p2, *p3;     
    int i, j;

    
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &c[0][0];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (p1 + i * 3 + j));     

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (p2 + i * 3 + j));

    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            *(p3 + i * 3 + j) = *(p1 + i * 3 + j) + *(p2 + i * 3 + j);

    printf("\nSum of the matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", *(p3 + i * 3 + j));
        printf("\n");
    }
    return 0;
}