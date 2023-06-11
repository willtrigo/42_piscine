
#include <stdio.h>
#include <stdlib.h>

void			ft_error(void);
char			ft_is_digit(char *str);
unsigned int	ft_atoi(char *str);
void			data(unsigned int result, char *path);
void			ft_search_struct(char *buffer);


int	main(int argc, char *argv[])
{
	char valid;
	unsigned int result;
	char *path;

	path = "numbers.dict";
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
			data(result, path);
		}
	}
	else
	{
		valid = ft_is_digit(argv[2]);
		if (valid == 't')
		{
			result = ft_atoi(argv[2]);
			printf("%d\n", result);
			data(result, argv[1]);
		}
	}

}
