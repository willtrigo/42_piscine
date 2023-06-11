#ifndef RUSH02_H
#define RUSH02_H

unsigned int	ft_atoi(char *str);

unsigned int	*ft_get_key(char *buffer);

void			ft_error();

void			ft_get_key_desc(unsigned int result, char *buffer);

char			*ft_get_desc(char *buffer);

char			ft_is_digit(char *str);

void			data(int result);

void			ft_search_struct(char *buffer);

#endif