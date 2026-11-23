
/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[100];
	int count = 0;
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tolower(str[i]); 
		else if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]); 
		count++; 
	}
	puts("\nModified string: ");
	puts(str); 
	printf("\nTotal number of characters: %d\n",count);

	return 0;
}