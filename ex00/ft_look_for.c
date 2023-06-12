#include <unistd.h>

void	ft_look_for(unsigned int result, unsigned int *key, char **desc)
{
	int i;
	int j;

	i = 0;
	while (key[i] <= 1000000000)
	{
		if (result == key[i])
		{
			j = 0;
			while(desc[i][j] != '\0')
			{
				write(1, &desc[i][j], 1);
				j++;
			}
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}