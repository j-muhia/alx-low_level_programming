#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int car = 1;
	unsigned long int par = 2;
	unsigned long int l = 1000000000;
	unsigned long int car1;
	unsigned long int car2;
	unsigned long int par1;
	unsigned long int par2;

	printf("%lu", car);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", par);
		par += car;
		car = par - car;
	}
	car1 = (car / l);
	car2 = (car % l);
	par1 = (par / l);
	par2 = (par % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", par1 + (par2 / l));
		printf("%lu", par2 % l);
		par1 = par1 + car1;
		car1 = par1 - car1;
		par2 = par2 + car2;
		car2 = par2 - car2;
	}
	printf("\n");
	return (0);
}
