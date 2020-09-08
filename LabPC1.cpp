#include <iostream>
#include <math.h>
#include <stdio.h>

int main()

{
	float a, dx, b, c, xnac, xcon;
	float result;

	printf("vvedite a=");
	scanf("%f", &a);
	printf("vvedite b=");
	scanf("%f", &b);
	printf("vvedite c=");
	scanf("%f", &c);
	printf("vvedite X nac=");
	scanf("%f", &xnac);
	printf("vvedite X con=");
	scanf("%f", &xcon);
	printf("vvedite dX=");
	scanf("%f", &dx);

	for (float x = xnac; x <= xcon; x += dx)

	{
		if (a < 0 && x != 0) {

			result = a * pow(x, 2) + pow(b, 2) * x;
		}
		else if (a > 0 && x == 0)
		{
			result = x - (x - a) / (x - c);

		}

		else {
			result = 1 + x / c;
		}

		if (!(((long)floor(a) | (long)floor(b)) & ((long)floor(b) | (long)floor(c))))

		{

			printf("x = %.2f\tF = %.0f\n", x, result);
		}
		else
		{


			printf("x = %.2f\tF = %.2f\n", x, result);
		}

	}
	return 0;



}
