#include <unistd.h>
#include <string.h>
/**
* main - entry point of the program
* Description: write an standard error with write
* Return: 1 always
*/
int main(void)
{
	char quote[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, strlen(quote));
	return (1);
}

