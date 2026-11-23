/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() 
{
    int n,i,t;
    int maxindex=0,minindex=0;
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d",&n);
    
    int a[n];
    printf("\n");
    
    for ( i=0; i < n; i++)
    {  
        printf("ENTER ELEMENT %d :",i+1);
        scanf("%d",&a[i]);
    }

    int max=a[0];
    int min=a[0];
    for ( i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max=a[i]; 
            maxindex=i;
        }
        if(a[i]<min)
        {
            min=a[i]; 
            minindex=i;
        }
    }
    printf("\nMaximum value of array  = %d\n", max);//maximum of array
    printf("Minimum value of array = %d\n", min);  //minimum of array
    //SWAPPING MAX & MIN
    t=a[minindex];
    a[minindex]=a[maxindex];
    a[maxindex]=t;

    printf("\nARRAY AFTER SWAPPING MAX & MIN\n");
    for(i=0;i<n;i++)           
    {
        printf("%d",a[i]);
        if(i<n-1)
            printf(",");
    }
    return 0;
}