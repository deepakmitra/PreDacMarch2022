//Aruthmetic Operators
#include<stdio.h>
int main()
{
	long res= 5 * 3 / 5 + 10 % 2 - 1; 
	printf("\n Result : %ld", res);
	
	float pr=5000, rt=5, t=10;
	float inte=(pr*rt*t*0.01);
	
	printf("\n inte : %f", inte);
	
	//shorthand operator
	//a+=10 ; => a=a+10
	//a*=5 ; => a=a*5;
	
	float a=5;
	printf("\n a+=10 : %f", a+=10);
	a=5;
	printf("\n a-=10 : %f", a-=10);
	a=5;
	printf("\n a*=10 : %f", a*=10);
	a=5;
	printf("\n a/=10 : %f", a/=10);
	
	int x=5, y=5;
	printf("\n x==y : %d", (x==y));
	printf("\n x>=y : %d", (x>=y));
	printf("\n x<=y : %d", (x<=y));
	printf("\n x>y : %d", (x>y));
	printf("\n x<y : %d", (x<y));
	printf("\n x!=y : %d", (x!=y));
	
	int z=7;
	x=5, y=2;
	printf("\n (x>y)&&(x>z): %d", (x>y)&&(x>z));
	printf("\n (x>y)||(x>z): %d", (x>y)||(x>z));
	
	x=3;
	printf("\n left shift 2 bits : %d", x<<3);
	printf("\n right shift 2 bits : %d", x>>2);
}
