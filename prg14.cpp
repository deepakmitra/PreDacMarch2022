//to enter string with blank space
#include<stdio.h>
int main()
{
	char str[40];
	printf("\n Enter a string : ");
	//this shall read char mentioned in the [] and stop when any other char is entered
	scanf("%[abcdefghijklmnopqrstuvwzyz ]", str);
	printf("\n Entered String : %s", str);	
}
