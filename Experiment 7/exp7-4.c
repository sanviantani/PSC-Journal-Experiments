/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include<stdio.h>
#include<stdlib.h>

// declaring function below //

float add (float,float);
float sub (float,float);
float mul (float,float);
float division (float,float);

int main()
{	
	float a,b;     // Inputs from user //
	float k,l,m,n; // Variables to store the result of operations //
	char c;        // Stores the operation symbol //

	printf("_________Please enter two numbers_________\n");
	printf("Enter value for a: ");
	scanf("%f",&a);

	printf("Enter value for b: ");
	scanf("%f",&b);

	getchar();  // Clears the enter key pressed after inputting numbers in input pipeline //

	start:  // Label used to return here if user doesn't input a correct sign for arithmetic operation //
	
	printf("___________PLEASE CHOOSE A PROCESS__________\n");
	printf("Enter '+' sign for addition\nEnter '-' sign for substraction\nEnter '*' sign for multiplication\nEnter '/' sign for division\n");
	scanf("%c",&c);

	switch(c)
	{
		case '+': 
		{
			k = add (a,b); 
			printf("Addition of %f and %f is %f: ",a,b,k);
			break;
		}
		case '-':
		{
			l = sub (a,b); 
			printf("Substraction of %f and %f is %f: ",a,b,l);
			break;
		}
		case '*':
		{
			m = mul (a,b); // Calling mul function //
			printf("Multiplication of %f and %f is %f: ",a,b,m);
			break;
		}
		case '/': 
		{
			if(b==0) 
				printf("Division is not possible\n");
			else{
				n = division (a,b); 
				printf("Division of %f and %f is %f: ",a,b,n);
			}
			break;
		}
		default : 
		{
			printf("Incorrect sign please enter appropiate sign to process\n");
			goto start;
		}
	}

	exit(0); 
	return 0;
}

float add (float a,float b)
{
	float x = a + b;
	return x;
}

float sub (float a,float b)
{
	float y = a - b;
	return y;
}

float mul (float a,float b)
{
	float z = a * b;
	return z;
}

float division (float a,float b)
{
	float w = a / b;
	return w;
}