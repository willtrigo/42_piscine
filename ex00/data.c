#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_error();
void ft_get_key(char *buffer);
void data();
unsigned int ft_atoi(char *str);

void data()
{
	int fd;
	char buffer[4096];
	int file_size;

	fd = open("numbers.dict", O_RDWR);

	if (fd != -1)
	{
		file_size = read(fd, buffer, 4096);
		printf("%d\n", file_size);
		ft_get_key(buffer);
		close(fd);
		buffer[file_size] = '\0';
	}
	else
		ft_error();
}

// typedef struct
// {
//     unsigned int key;
//     char description;
// } node;

void ft_get_key(char *buffer)
{
    char char_key[500][500];
	unsigned int key[500];

    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    while (buffer[i] != '\0')
    {
        if (buffer[i] >= '0' && buffer[i] <= '9')
        {
            k = 0;
            char_key[j][k] = buffer[i];

            k = 1;
            while (buffer[i + k] >= '0' && buffer[i + k] <= '9')
            {
                char_key[j][k] = buffer[i + k];
                k++;
            }
			key[j] = ft_atoi(&char_key[j][0]);
			printf("key: %d\n", key[j]); 
            i = i + k - 1;
            j++;
        }


        
        i++;
    }



}
	// void ft_desc(int key)