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
long int longint1;
long long int longlongint1;
float float1;

printf("Size of a char: %ld bytes(s) \n", sizeof(char1));
printf("Size of an int: %ld byte(s)\n", sizeof(int1));
printf("Size of a long int: %ld byte(s)\n", sizeof(longint1));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongint1));
printf("Size of a float: %ld byte(s)\n", sizeof(float1));
return (0);
}
