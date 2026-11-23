/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i=0,flag=0;



	printf("Enter first string: "); // User will enter 1st string //
	fgets(str1, sizeof(str1), stdin); 

	printf("Enter second string: "); // User will enter 2nd string //
	fgets(str2, sizeof(str2),stdin); 
	
	for(i=0;str1[i] != '\0' || str2[i] != '\0';i++) 
	{
		if (str1[i] != str2[i])	{
			flag = 1; 
			break;
		}
	}
 
	if(flag == 0)
		printf("Given strings are same\n");

	else 
		printf("Given strings are not same\n");

	return 0;
}