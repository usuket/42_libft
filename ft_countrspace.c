#include "libft.h"

int		calc_end_trim_size(const char *s, const int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (ft_is_white_space(s[len - i - 1]))
			i++;
		else
			break ;
	}
	return (i);
}
