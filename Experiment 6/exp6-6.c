/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	
	printf("Enter the number of strings: "); 
	scanf("%d",&n);
	
	getchar();
	
	char str[n][100];
	char temp[100]; 
	printf("Enter %d strings: \n",n);
	for(int i=0;i<n;i++)
	{
		fgets(str[i],sizeof(str[i]),stdin); 
		str[i][strcspn(str[i], "\n")] = '\0'; 
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			
			if(strcmp(str[j], str[j+1]) >0)
			{
				
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		
		}

	}
	
	printf("\nStrings in alphabetical order: \n");
	for(int i=0;i<n;i++)
		printf("%s\n",str[i]);

	return 0;
}