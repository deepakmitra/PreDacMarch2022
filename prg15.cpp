//to enter string with blank space
#include<stdio.h>
int main()
{
	char str[40];
	printf("\n Enter a string : ");
	//this shall read all char except \n
	scanf("%[^\n]", str);
	printf("\n Entered String : %s", str);	
}
