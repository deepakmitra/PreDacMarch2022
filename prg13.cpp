//to enter string with blank space
#include<stdio.h>
int main()
{
	char str[40];
	printf("\n Enter a string : ");
	int i=-1;
	//this loop shall read char by char till \n is pressed
	do
	{
		str[++i]=getchar(); //this shall read a single character
	}while(str[i]!='\n');
	str[i]='\0'; //assign the last entered char by null
	
	printf("\n string : %s", str);
	
}
