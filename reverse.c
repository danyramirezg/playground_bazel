
#include <stdio.h>


void reverse(char *str, int size)
{
	int i, j;
	char temp;

	for (i = 0, j = size -1; i<j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main()
{
	char str[] = "Dany";
	printf("%s", str);
	putchar(10);
	reverse(str, 4);
	printf("%s", str);



	return 0;
}
