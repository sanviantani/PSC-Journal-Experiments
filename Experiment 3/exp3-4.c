//EXPERIMENT 3
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() 
{
    int a,b,result;
    char f;
    
    printf("Enter two value for calculation :\n");
    printf("Value 1 :");
    scanf("%d",&a);
    printf("Value 2 :");
    scanf("%d",&b);
    
    printf("\n\nSelect the Arithmetic operation you want to perform:");
    printf("\n1. \"+\" for ADDITION\n2. \"-\" for SUBTRACTION\n3. \"*\" for MULTIPICATION\n4.\"/\" for DIVISION");
    printf("\n\nEnter operator :");
    
    scanf("\n%c",&f);
    switch(f)
    {
        case '+' :
            printf("Addition of %d and %d is : %d+%d=%d",a,b,a,b,a+b);
            break;
        case '-' :
            printf("Subtraction of %d and %d is : %d-%d=%d",a,b,a,b,a-b);
            break;
        case '*' :
            printf("Multiplication of %d and %d is : %d*%d=%d",a,b,a,b,a*b);
            break;
        case '/' :
            if(b==0)
                printf("Cannot be divided by 0");
            else
            printf("Division of %d and %d is : %d/%d=%.2f",a,b,a,b,(float)a/b);
            break;
        default:
            printf("----------Invalid input----------");
    }
    return 0;
}