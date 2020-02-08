#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char char1;
int int1;
long int int2;
long long int longlong1;
float float1;

printf("Size of a char: %d byte(s)\n", sizeof(char1));
printf("Size of an int: %d byte(s)\n", sizeof(int1));
printf("Size of a long int: %ld byte(s)\n", sizeof(int2));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlong1));
printf("Size of a float: %ld byte(s)\n", sizeof(float1));
return (0);
}
