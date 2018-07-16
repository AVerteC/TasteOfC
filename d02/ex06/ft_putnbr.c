#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}


    void     ft_putstr(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0') 
        {
                ft_putchar(str[i]);    
                i++;
        }  
}


void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putstr("2147483648");
	}
	if (nb == 2147483647)
	{
		ft_putstr("2147483647");
	}

	else
	{
		nb += '0';
		char a = nb;
		ft_putstr(a);
	}

}




int main(void)
{
    ft_putnbr(2147483647);
    
}