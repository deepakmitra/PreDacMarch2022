//the ways we can enter Strings
//strings in c and C++ it is array of char
//C string : It is a sequence of characters which is terminated by a null character(\0).

#include<stdio.h>
int main()
{
	//initialization of a string
	char str1[] ={'I', 'n', 'd', 'i', 'a', '\0'};
	char str2[]="India"; //string constants are enclosed in double quotes (")
	
	printf("\n %s", str1);
	printf("\n %s", str2);
}
