#include <unistd.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
     
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 37);

return (1);

}
