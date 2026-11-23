/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() 
{
    int input;
    printf("\nThis program will show whether given number is POSITIVE, NEGATIVE OR 0\n");
    printf("Enter a number :");
    scanf("%d",&input);
    if(input>0)
        printf("Given number %d is \'POSITIVE\'",input);
    else if(input<0)
        printf("Given number %d is \'NEGATIVE\'",input);
    else
        printf("Given number %d is \'0\'",input);
    return 0;
}