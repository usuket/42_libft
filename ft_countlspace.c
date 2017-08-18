#include "libft.h"
int		calc_front_trim_size(const char *s, const int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (ft_is_white_space(s[i]))
			i++;
		else
			break ;
	}
	return (i);
}
