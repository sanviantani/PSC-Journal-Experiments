/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
int main()
{
    int n,a[n],sum=0;
    float avg;
    printf("ENTER A NO. TILL YOU WANT TO ENTER AN ELEMENT :");
    scanf("%d",&n);
    printf("\nENTER ELEMENTS:\n");
    
    for(int i=0; i < n ; i++)
    {
        printf("ELEMENT %d : ",i+1);
        scanf("%d",&a[i]);
        
        sum+=a[i];
    }
    printf("\nSum of entered element is : %d\n",sum);
    
    avg=(float)sum/n;
    printf("\nAverage of N number is : %.2f\n",avg);
    return 0;
}