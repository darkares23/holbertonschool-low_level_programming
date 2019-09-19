#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: return error 1
 */
int main(void)
{
int a;
a = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", a);
return (1);
}