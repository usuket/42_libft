#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putnbr_fd"

int main(void) {
	int test_num_000 = -0;
	char *path_000 = "log/test_ft_putnbr_fd_000.log";
	int fd_000 = open(path_000, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(test_num_000, fd_000);
	close(fd_000);

	int test_num_001 = 2147483647;
	char *path_001 = "log/test_ft_putnbr_fd_001.log";
	int fd_001 = open(path_001, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(test_num_001, fd_001);
	close(fd_001);

	int test_num_002 = -2147483648;
	char *path_002 = "log/test_ft_putnbr_fd_002.log";
	int fd_002 = open(path_002, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(test_num_002, fd_002);
	close(fd_002);
	return (0);
}