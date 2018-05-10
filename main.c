#include <stdio.h>

int main(void)
{
	printf("...===DISCRIMINANT CALCULATOR===...\n");
	int a, b, c, d = 0;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	d = b*b - 4*a*c;
	printf("D = %d\n",d);
	return 0;
}