#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: It will return 0
 */
int main(void)
{	
int a;	
long int b;
long long int c;
char d;
float f;
	printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long init: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long init: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
