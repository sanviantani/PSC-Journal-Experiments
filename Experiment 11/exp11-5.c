/*
DDU'30
B.Tech IT090
Sanvi Antani
*/

#include <stdio.h>

int main()
{
    int n, i, j, symmetric = 1;   

    printf("Enter order of the matrix (n): ");
    scanf("%d", &n);

    int a[n][n];
    int *p = &a[0][0];            
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (p + i * n + j));

   
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(p + i * n + j) != *(p + j * n + i))
            {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0)
            break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}