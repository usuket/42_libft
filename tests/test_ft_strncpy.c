#include <stdio.h>
#include <string.h>

#include "libft.h"

int main(void) {

	char *dest_t1_1 = malloc(sizeof(char) * 10);
	char *dest_t1_2 = malloc(sizeof(char) * 10);
	strncpy(dest_t1_1, "", 1);
	ft_strncpy(dest_t1_2, "", 1);
	printf("%s:%s\n", dest_t1_1, dest_t1_2);

	char *dest2_1 = malloc(sizeof(char) * 10);
	char *dest2_2 = malloc(sizeof(char) * 10);
	strncpy(dest2_1, "ab", 1);
	ft_strncpy(dest2_2, "ab", 1);
	printf("%s:%s\n", dest2_1, dest2_2);

	char *dest3_1 = malloc(sizeof(char) * 10);
	char *dest3_2 = malloc(sizeof(char) * 10);
	strncpy(dest3_1, "ab", 2);
	ft_strncpy(dest3_2, "ab", 2);
	printf("%s:%s\n", dest3_1, dest3_2);

	char *dest4_1 = malloc(sizeof(char) * 10);
	char *dest4_2 = malloc(sizeof(char) * 10);
	strncpy(dest4_1, "a", 1);
	ft_strncpy(dest4_2, "a", 1);
	printf("%s:%s\n", dest4_1, dest4_2);

	char *dest5_1 = malloc(sizeof(char) * 10);
	char *dest5_2 = malloc(sizeof(char) * 10);
	strncpy(dest5_1, "", 0);
	ft_strncpy(dest5_2, "", 0);
	printf("%s:%s\n", dest5_1, dest5_2);

	char *dest_t6_1 = malloc(sizeof(char) * 10);
	char *dest_t6_2 = malloc(sizeof(char) * 10);
	strncpy(dest_t6_1, "a\tb", 3);
	ft_strncpy(dest_t6_2, "a\tb", 3);
	printf("%s:%s\n", dest_t6_1, dest_t6_2);

	char *dest_t7_1 = malloc(sizeof(char) * 10);
	char *dest_t7_2 = malloc(sizeof(char) * 10);
	strncpy(dest_t7_1, "a\0b", 3);
	ft_strncpy(dest_t7_2, "a\0b", 3);
	printf("%s:%s\n", dest_t7_1, dest_t7_2);

	char *dest_t8_1 = malloc(sizeof(char) * 10);
	char *dest_t8_2 = malloc(sizeof(char) * 10);
	strncpy(dest_t8_1, "12345", 3);
	ft_strncpy(dest_t8_2, "12345", 3);
	printf("%s:%s\n", dest_t8_1, dest_t8_2);

	char *dest_t81_1 = malloc(sizeof(char) * 10);
	char *dest_t81_2 = malloc(sizeof(char) * 10);
	strncpy(dest_t81_1, "12345", 8);
	ft_strncpy(dest_t81_2, "12345", 8);
	printf("%s:%s\n", dest_t81_1, dest_t81_2);
}
