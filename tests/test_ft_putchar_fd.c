#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putchar_fd"

int main(void) {
	int fd;
	int fd1;

	char *path = "log/test_ft_putchar_fd.log";
	fd = open(path, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ft_putchar_fd('x', fd);
	close(fd);

	fd1 = open(path, O_RDONLY);
	char t = 0;
	while (read(fd1, &t, 1) > 0) {
		printf("%c", t);
	}
	close(fd1);
	return (0);
}