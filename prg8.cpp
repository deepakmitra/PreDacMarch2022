//write program to calculate simple interest
#include<stdio.h>
int main()
{
	float pr, rt, t, si;
	
	printf("\n enter Principal amount : ");
	scanf("%f", &pr);
	printf("\n enter rate of interest : ");
	scanf("%f", &rt);
	printf("\n enter time in years : ");
	scanf("%f", &t);
	si=pr*rt*t*0.01;
	printf("\n Simple interest : %.2f", si);
}
