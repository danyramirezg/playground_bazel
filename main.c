#include <stdio.h>
#include "reverse.h"


int main()
{
	char str[] = "Dany";
	printf("%s", str);
	putchar(10);
	reverse(str, 4);
	printf("%s", str);

	return 0;
}
