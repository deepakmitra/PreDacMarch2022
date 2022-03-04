//unary operator
#include<stdio.h>
int main()
{
	int i=10;
	
	int i2=-i; // i2= i*(-1)
	printf("\n i = %d \t i2 = %d", i, i2);
	
	//increment and decrement operators, they are of two types pre increment and post increment
	//pre decrement and post decrement
	
	// pre : incfrement / decrement before implementation
	//post : increment / decrement after implementation
	
	i=1;
	printf("\n i = %d", i); //1
	printf("\n ++i = %d", ++i); //pre increment 2
	printf("\n i = %d", i); //implementation 2
	
	printf("\n\n");
	i=1;
	printf("\n i = %d", i); //1
	printf("\n i++ = %d", i++); //post increment 1
	printf("\n i = %d", i); //implementation 2
	
	printf("\n\n");
	i=10;
	printf("\n i = %d", i); //10
	printf("\n --i = %d", --i); //pre decrement 9
	printf("\n i = %d", i); //implementation 9
	
	printf("\n\n");
	i=10;
	printf("\n i = %d", i); //10
	printf("\n i-- = %d", i--); //post decrement 10
	printf("\n i = %d", i); //implementation 9
	
	//sizeof() shall return size occupied in bytes
	printf("\n sizeof(int) : %d", sizeof(int));
	printf("\n sizeof(char) : %d", sizeof(char));
	printf("\n sizeof(float) : %d", sizeof(float));
	printf("\n sizeof(double) : %d", sizeof(double));
	
}
