//reading from keyboard
#include<stdio.h>
int main()
{
	int a, b; // declare the variables before reading
	
	/*
	printf("\n Enter an integer :");
	scanf("%d", &a);
	printf("\n Enter an integer :");
	scanf("%d", &b);
	*/
	printf("\n Enter two integer :");
	scanf("%d%d", &a,&b); //here while reading data from kbd, separate data with white space
	printf("\n sum : %d", (a+b));
	printf("\n Difference : %d", (a-b));
	printf("\n Product : %d", (a*b));
	printf("\n Quotient : %d", (a/b));
	printf("\n Remainder : %d", (a%b));
}
