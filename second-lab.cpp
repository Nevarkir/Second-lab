#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;
	float x1 = 0.0; 
	float x2 = 0.0;
		
	printf("Input a: ");
	scanf("%f", &a);
	printf("Input b: ");
	scanf("%f", &b);
	printf("Input c: ");
	scanf("%f", &c);
	
	d = b * b - 4 * a * c;
	
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("x1 = %f\nx2 = %f", x1, x2);
	}
	else printf("\nDiscriminant < 0\n");

	return 0;
}
