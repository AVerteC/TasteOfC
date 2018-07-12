#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_putnbr(int nb)
{
    if (nb == 0)
    {
        ft_putchar('0');
    }
    
    /*
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    */

    if (nb > 0 && nb <=9)
    {
        ft_putchar(nb);
    }
    
    if(nb/10)
        ft_putchar(nb%10 + '0')




}


int main(void)
{
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(9);
    ft_putchar('\n');
    ft_putnbr(-100);
    ft_putchar('\n');
    ft_putnbr(34897);
}