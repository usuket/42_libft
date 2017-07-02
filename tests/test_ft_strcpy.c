#include <stdio.h>
#include <string.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strcpy"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char dest_t1_1[] = "z";
	char dest_t1_2[] = "z";
	char *expected_t1 = strcpy(dest_t1_1, "");
	char *actual_t1 = ft_strcpy(dest_t1_2, "");
	printf("%s:%s\n", expected_t1, actual_t1);

	char dest2_1[] = "zz";
	char dest2_2[] = "zz";
	char *expected2 = strcpy(dest2_1, "ab");
	char *actual2 = ft_strcpy(dest2_2, "ab");
	printf("%s:%s\n", expected2, actual2);

	char dest3_1[] = "zzz";
	char dest3_2[] = "zzz";
	char *expected3 = strcpy(dest3_1, "ab");
	char *actual3 = ft_strcpy(dest3_2, "ab");
	printf("%s:%s\n", expected3, actual3);

	char dest4_1[] = "zzz";
	char dest4_2[] = "zzz";
	char *expected4 = strcpy(dest4_1, "a");
	char *actual4 = ft_strcpy(dest4_2, "a");
	printf("%s:%s\n", expected4, actual4);

	char dest1_5[] = "zzz";
	char dest2_5[] = "zzz";
	char *expected5 = strcpy(dest1_5, "");
	char *actual5 = ft_strcpy(dest2_5, "");
	printf("%s:%s\n", expected5, actual5);

	char dest_t6_1[] = "zzz";
	char dest_t6_2[] = "zzz";
	char *expected_t6 = strcpy(dest_t6_1, "a\tb");
	char *actual_t6 = ft_strcpy(dest_t6_2, "a\tb");
	printf("%s:%s\n", expected_t6, actual_t6);

	char dest_t7_1[] = "zzz";
	char dest_t7_2[] = "zzz";
	char *expected_t7 = strcpy(dest_t7_1, "a\0b");
	char *actual_t7 = ft_strcpy(dest_t7_2, "a\0b");
	printf("%s:%s\n", expected_t7, actual_t7);

}
