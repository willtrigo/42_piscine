#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_error();
void ft_get_key_desc(unsigned int result, char *buffer);
unsigned int ft_atoi(char *str);

void data(int result)
{
	int fd;
	char buffer[4096];
	int file_size;

	fd = open("numbers.dict", O_RDWR);

	if (fd != -1)
	{
		file_size = read(fd, buffer, 4096);
		printf("%d\n", file_size);
		ft_get_key_desc(result, buffer);
		close(fd);
		buffer[file_size] = '\0';
	}
	else
		ft_error();
}

void ft_get_key_desc(unsigned int result, char *buffer)
{
	char char_key[500][500];
	unsigned int key[500];
	char desc[500][500];

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

			i = i + k - 1;
			j++;
		}
		i++;
	}

	i = 0;
	j = 0;
	while (buffer[i] != '\0')
	{
		if ((buffer[i] >= 32 && buffer[i] <= 126))
		{
			if (buffer[i] > 58)
			{
				k = 0;
				desc[j][k] = buffer[i];

				k = 1;
				while (buffer[i + k] >= 'a' && buffer[i + k] <= 'z')
				{
					desc[j][k] = buffer[i + k];
					k++;
				}

				i = i + k - 1;
				j++;
			}
		}
		i++;
	}

	i = 0;
	while(i < 21)
	{
		if(key[i] == result)
		{
			printf("%s\n", desc[i]);
			
		}
		i++;
	}

}

// void ft_get_key(char *buffer)
// {

// }

// void ft_get_des(int key)