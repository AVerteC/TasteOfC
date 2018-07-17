#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_strlen(char * str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        c++;
    }
    return c;
}

int main(void)
{
    ft_strlen("abcdefg")
}