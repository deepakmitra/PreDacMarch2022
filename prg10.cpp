//read a string from the keyboard
#include<stdio.h>
int main()
{
	char str1[40], str2[40], str3[40]; //40 character string
	
	printf("\n Enter a string : ");
	//this shall continue to read character till blank space is entered or \n new line is pressed.
	scanf("%s", str1); 
	fflush(stdin); //emptying the input buffer
	
	printf("\n Enter a string : ");
	scanf("%s", str2);
	fflush(stdin); //emptying the input buffer
	 
	printf("\n Enter a string : ");
	scanf("%s", str3); 
	fflush(stdin); //emptying the input buffer
	
	printf("\n String :  %s", str1);
	printf("\n String :  %s", str2);
	printf("\n String :  %s", str3);
}
