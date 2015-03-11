#include <stdio.h>
#include <math.h>

int main()
{
	printf("Hello World!\n");
	printf("%d\n", 2+3);		// %d print an integer
	printf("%f\n", 1.2+34.654); // %f print a float number
	printf("%.16f\n", cos(2.0*M_PI/3.0)); 
	return 123;
}
