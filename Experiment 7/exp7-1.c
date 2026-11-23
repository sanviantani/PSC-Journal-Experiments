/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>


void Printline(void);
int main()
{
	printf("Below this line = sign will be printed 81 times\n");
	Printline(); 

	return 0;
}

void Printline(void)
{
	int i;
	for(i=0;i<82;i++)
		printf("=");

}