#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putendl_fd"

int main() {
	int fd;
	int fd1;

	char *test_str = "test\n012345";
	char *path = "log/test_ft_putendl_fd.log";
	fd = open(path, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ft_putendl_fd(test_str, fd);
	close(fd);

	fd1 = open(path, O_RDONLY);
	char t = 0;
	while (read(fd1, &t, 1) > 0) {
		printf("%c", t);
	}
	close(fd1);
	return (0);
}