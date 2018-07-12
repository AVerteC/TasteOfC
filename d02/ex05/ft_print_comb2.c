#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_print_comb2(void)
{
    int a;
    int b;
	b = '0';
    a = '0';
	while (a <= '9')
	{
			
			while (b <= '9')
			{
					
					ft_putchar(a);
					ft_putchar(b);
					if (a != '9' || b != '9')
					{
						if ( (b <= '9') )
						{
							ft_putchar(',');
							ft_putchar(' ');

						}
					}
				
				b++;
			}
			a++;
			b = '0';
	}
}


int main(void)
{
    ft_print_comb2();
}