#include <unistd>
/**
* main - entry point of the program
* Description : this program print an standard error with write
* Return : 1 always 
*/
int main(void)
{
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
	write(2,quote + "\n", strlen(quote));
	return (1);
}

