/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
float totalAmount (int p,float r,int n);

int main()
{

	int p,n;
	float r,a;
	printf("Enter principal value P: "); 
	scanf("%d",&p);

	printf("Enter rate of interest r: "); 
	scanf("%f",&r);

	printf("Enter number of years n: "); 
	scanf("%d",&n);
	
	a = totalAmount(p,r,n); 

	printf("Total amount of interest %d after %d years is %f",p,n,a); 
	return 0;
}

float totalAmount (int p,float r,int n)
{
	int i;
	float total=p;
	for(i=0;i<n;i++)
			total = total*(1+r/100);	
	return total;
}