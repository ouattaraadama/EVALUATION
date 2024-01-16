#include<stdio.h>
#include"Pi.h"

int main()
{
	float ray;
	printf("rayon ?");
	scanf("%f",&ray);
	printf(" %f %f \n",circ(ray),surf(ray));
	return 0;
}
