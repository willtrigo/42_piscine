#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_error();
char ft_is_digit(char *str);
unsigned int ft_atoi(char *str);
void data();
void ft_search_struct(char *buffer);

int main(int argc, char *argv[])
{
    char valid;
    unsigned int result;

    if (argc < 2 || argc > 3)
    {
        ft_error();
    }
    else if (argc == 2)
    {
        valid = ft_is_digit(argv[1]);
        if (valid == 't')
        {
            result = ft_atoi(argv[1]);
            printf("%d\n", result);
            data();
        }
    }
    else
    {
        // tratar o file;
        valid = ft_is_digit(argv[2]);
        if (valid == 't')
        {
            result = ft_atoi(argv[2]);
            printf("%d\n", result);
            data();
        }
    }
}


unsigned int ft_atoi(char *str)
{
    unsigned int i;
    unsigned int result;

    i = 0;
    result = 0;
    while (str[i] != '\0')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return result;
}

char ft_is_digit(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            ft_error();
            return 'f';
        }
        i++;
    }
    return 't';
}

void ft_error()
{
    write(1, "error\n", 6);
}