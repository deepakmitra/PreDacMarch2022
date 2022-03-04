//Output
#include<stdio.h>
int main()
{
	printf("\n Welcome to C Programming");
	
	int i=12345;
	printf("\n decimal Form i = %d", i);
	printf("\n decimal form i = %i", i);
	printf("\n octal form i = %o", i);
	printf("\n octal form with base i = %#o", i);
	printf("\n hexadecimal form i = %x", i);
	printf("\n hexadecimal form with base i = %#x", i);
	printf("\n hexadecimal form i = %X", i);
	printf("\n hexadecimal form with base i = %#X", i);
	
	//by default all floating point constants are of double type
	float f=123.456;
	printf("\n float f = %f", f);
	printf("\n float with fixed decimal place f = %g", f);
	printf("\n float in exponential form f = %e", f);
	printf("\n float in exponential form f = %E", f);
	
	double d=0.000123456;
	printf("\n double d = %lf", d);
	printf("\n double in exponential form f = %e", d);
	printf("\n double in exponential form f = %E", d);
	
	char ch='Y';
	printf("\n ch = %c", ch);
	printf("\n ch = %d", ch); //display the ASCII value
	
	char str[]="We all are proud indians";
	printf("\n str = %s", str);
	
	printf("\n size of float : %d", sizeof(f));
	printf("\n size of double : %d", sizeof(d));
}
