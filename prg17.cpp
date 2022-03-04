//Aruthmetic Operators
#include<stdio.h>
int main()
{
	int a, b;
	printf("\n enter an integer : ");
	scanf("%d", &a);
	printf("\n enter an integer : ");
	scanf("%d", &b);
	printf("\n sum : %d", (a+b));
	printf("\n Difference : %d", (a-b));
	printf("\n Product : %d", (a*b));
	printf("\n Quotient : %d", (a/b));//integer division always returns integer
	printf("\n Remainder : %d", (a%b)); //remainder operation is carried out bwetween integers
	
	
}
