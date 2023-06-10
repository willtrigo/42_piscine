#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_error();
void ft_search_struct(char *buffer);

void data()
{
    int fd;
    char buffer[4096];

    fd = open("numbers.dict", O_RDWR);

    if (fd != -1)
    {
        read(fd, buffer, 4096);
        printf("%s\n", buffer);
        ft_search_struct(buffer);
        close(fd);
    }
    else
        ft_error();
}

typedef struct
{
    unsigned int key;
    char description;
} node;

void ft_search_struct(char *buffer)
{
    int i;
    int j;
    node number[80];
    int found_separator;

    i = 0;
    found_separator = 0;
    while (buffer[i] != 4)
    {
        if (buffer[i] >= '0' && buffer[i] <= '9')
        {
            number[i].key = buffer[i] - '0';
            printf("key: %d, ", number[i].key);
        }
        else if (buffer[i] == 58)
        {
            found_separator = 1;
        }
        else if (buffer[i] >= 'a' && buffer[i] <= 'z' && found_separator == 1)
        {
            j = i;
            while (buffer[j] != '\0')
            {
                number[i].description = buffer[j];
                printf("description: %c ", number[i].description);
                j++;
            }
        }
        i++;
    }
}
