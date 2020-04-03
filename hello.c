


#include <stdio.h>

void swap (char *x, char *y) {
char *t = x;
x = y;
y = t;
}

int main ()
{
	char *x = "data";
	char *y = "structure";

	printf("%s, %s", x,y);

	swap (x, y);	

	printf ("%s, %s", x, y);

	return 0;
}
