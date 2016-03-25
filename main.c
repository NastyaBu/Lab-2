#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d, k1, k2;
	
	printf("Input firt element a:\n");
	scanf("%d", &a);
	
	printf("Input second element b:\n");
	scanf("%d", &b);
	
	printf("Input third element c:\n");
	scanf("%d", &c);
	
	d = b*b-4*a*c;
	
	if (d >=0)
	{
		k1 = (-b + sqrt(d))/(2*a);
		k2 = (-b + sqrt(d))/(2*a);
		
		prin("K1: %d\n", k1);
		print("K2: %d\n", k2);
	}
	else printf ("disr < 0");
	
	return 0;
}