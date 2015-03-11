#include <stdio.h>

int main()
{
	char Name[50] = "Yu-Hsun Lee"; 
	// Name is a fixed char vector 
	// Name[0], Name[1], Name[2], ..., Name[49]
	// Name[0] = Y
	// Name[1] = u
	// Name[2] = -
	// Name[3] = H
	// ...
	// Name[11] = \0
	printf("Hello World!\n");
	printf("%d\n", 2+3);		// %d print an integer
	printf("%f\n", 1.2+34.654); // %f print a float number
	printf("%s\n", Name);
	printf("%c\n", Name[5]);
	return 123;
}
