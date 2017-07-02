#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strlcat"
#define TARGET ft_strlcat
#define EXPECT strlcat

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str0_ft[30] = "ABCDE";
	char str0_li[30] = "ABCDE";
	int len0_ft = TARGET(str0_ft, "xyz", 0);
	int len0_li = EXPECT(str0_li, "xyz", 0);
	printf("len %i:%s\n", len0_ft, str0_ft);
	printf("len %i:%s\n", len0_li, str0_li);

	printf("##########################\n");
	char str1_ft[30] = "ABCDE";
	char str1_li[30] = "ABCDE";
	int len1_ft = TARGET(str1_ft, "xyz", 1);
	int len1_li = EXPECT(str1_li, "xyz", 1);
	printf("len %i:%s\n", len1_ft, str1_ft);
	printf("len %i:%s\n", len1_li, str1_li);

	printf("##########################\n");
	char str2_ft[30] = "ABCED";
	char str2_li[30] = "ABCED";
	int len2_ft = TARGET(str2_ft, "xyz", 6);
	int len2_li = EXPECT(str2_li, "xyz", 6);
	printf("len %i:%s\n", len2_ft, str2_ft);
	printf("len %i:%s\n", len2_li, str2_li);

	printf("##########################\n");
	char str3_ft[30] = "ABCDE";
	char str3_li[30] = "ABCDE";
	int len3_ft = TARGET(str3_ft, "01234", 8);
	int len3_li = EXPECT(str3_li, "01234", 8);
	printf("len %i:%s\n", len3_ft, str3_ft);
	printf("len %i:%s\n", len3_li, str3_li);

	printf("##########################\n");
	char str4_ft[30] = "ABCED";
	char str4_li[30] = "ABCED";
	int len4_ft = TARGET(str4_ft, "01234", 8);
	int len4_li = EXPECT(str4_li, "01234", 8);
	printf("len %i:%s\n", len4_ft, str4_ft);
	printf("len %i:%s\n", len4_li, str4_li);

	printf("##########################\n");
	char str_size_0_ft[30] = "ABCED";
	char str_size_0_li[30] = "ABCED";
	int len_size_0_ft = TARGET(str_size_0_ft, "01234", 0);
	int len_size_0_li = EXPECT(str_size_0_li, "01234", 0);
	// it should return ABCDE
	printf("size_0 len %i:%s\n", len_size_0_ft, str_size_0_ft);
	printf("size_0 len %i:%s\n", len_size_0_li, str_size_0_li);

	return 0;
}