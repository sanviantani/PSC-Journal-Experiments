/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>
void swap(int *a1, int *b1)
{
    int temp;
    temp = *a1;     
    *a1 = *b1;      
    *b1 = temp;     
}

int main()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // we send the addresses, not the values

    printf("After swapping:  x = %d, y = %d\n", x, y);
    return 0;
}