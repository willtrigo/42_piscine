#include <stdio.h>

void	ft_look_for(unsigned int result, unsigned int *key, char **desc)
{
	int i;
	i = 0;
	while (key[i] <= 1000000000)
	{
		if (result == key[i])
		{
			printf("%s ", desc[i]);
			break ;
		}
		i++;
	}
}