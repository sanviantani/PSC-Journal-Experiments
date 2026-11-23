//EXPERIMENT 3
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() 
{
    int input;
    printf("\nThis program will show you whether given number is even or odd\n");
    printf("Enter a number :");
    scanf("%d",&input);
    
    if(input%2 == 0)
        printf("Given number %d is EVEN",input);
    else
        printf("Given number %d is ODD",input);
    return 0;
}