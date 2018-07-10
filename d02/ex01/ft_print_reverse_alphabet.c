#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while(c >= 'a')
    {
        ft_putchar(c);
        c--; 
    }
    ft_putchar('\n');
}


int main(void)
{
    ft_print_reverse_alphabet();
} 
