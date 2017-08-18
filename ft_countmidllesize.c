#include "libft.h"

int		calc_mem_size(const int len, const int front, const int end)
{
	int mem_size;

	mem_size = len - (front + end) + 1;
	if (mem_size > 0)
		return (mem_size);
	return (0);
}