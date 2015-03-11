#include <stdio.h>

int main()
{
	int i;
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
	printf("%s\n", Name+3);
	printf("%d\n", Name);		// %u print un-signed integer
	printf("%d\n", Name+3);
	for(i=0;i<50;++i)
	{
		printf("%d : %c - %u\n", i, Name[i], Name[i]);
	}
	return 123;
}
