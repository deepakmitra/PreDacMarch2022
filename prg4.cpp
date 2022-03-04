//formatting flag
#include<stdio.h>
int main()
{
	int i=12345;
	//field size
	printf("\n %d", i);
	//if field width specified is less than required then compiler automatically provieds the 
	//required field width.
	printf("\n %3d", i); //here 3 is output field width but requirement is 5
	//if field width specified is more than required then rest of the 
	//spaces are filled with blank space and data is right aligned
	printf("\n %10d", i);
	//if we want data to be left aligned
	printf("\n %-10d", i);
	//if we want to fill the extra balk spaces by 0
	printf("\n %010d", i);
	
	int i1=123;
	int i2=-123;
	printf("\n i1 = %d \t i2 = %d", i1, i2);
	//we want to put a poistive sign for +ve number
	printf("\n i1 = %+d \t i2 = %+d", i1, i2);
	
	float f=123.45678;
	printf("\n %f", f);
	printf("\n %5f", f);
	printf("\n %20f", f);
	printf("\n %020f", f);
	
	printf("\n f = %.2f", f);
}
