/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>
int main()
{
     int n, i, term = 0;
     printf("Enter a number: ");
    scanf("%d", &n);

      
    for(i = 1; i <= n; i++)

    
        if(n % i == 0)
        {
            term++;
        }
    
   
    if(term== 2)
        printf("%d is a Prime Number", n);

    else
        printf("%d is Not a Prime Number", n);

    return 0;
}