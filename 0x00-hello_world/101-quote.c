#include <stdio.h>
/**
 *main - print without printf & puts
 *Return: 0
 */
int main(void)
{
char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
fwrite(hello, sizeof(hello) - 1, 1, stdout);
return (1);
}
