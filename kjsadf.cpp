//Arithmetic Operators
#include<stdio.h>
int main()
{
	int i=10;
	long l=123;
	float f=123.45;
	
	int i1= i+l; 
	printf("\n i1 = %d", i1);
	long l1= i+l;
	printf("\n l1 = %ld", l1);
	
	int i2=i+f; //if larger type is assigned to smaller type there is loss in value, here decimal part is lost
	printf("\n i2 = %d", i2);
	float f2=i+f;
	printf("\n f2 = %f", f2);
}
