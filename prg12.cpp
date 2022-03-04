//to enter string with blank space
#include<stdio.h>
int main()
{
	char str[40];
	printf("\n Enter a string : ");
	//this shall continue to read char till \n is pressed including blank space
	gets(str);
	printf("\n Entered String :");
	puts(str);
}
