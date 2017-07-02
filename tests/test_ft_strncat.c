#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strncat"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str1[30] = "ABC";
	strncat(str1, "xyz", 2);
	printf("%s\n", str1);

	char str2[30] = "ABC";
	ft_strncat(str2, "xyz", 2);
	printf("%s\n", str2);

	char str3[30] = "ABC";
	ft_strncat(str3, "xyz", 0);
//	strncat(str3, "xyz", 0);
	printf("%s\n", str3);

	// From libft-unit-test
	const size_t size = 10;
	char *str = malloc(size);
	char *buff = malloc(size);
	strcpy(buff,"AB");
	strcpy(str,"CDEFGHI");
	ft_strncat(buff, str, 10);
	printf("%s",buff);

//	//It should raise terminated by signal SIGSEGV (Address boundary error)
//	char b[0xF] = "nyan !";
//	ft_strncat(b, ((void *)0), 2);
//	printf("%s",b);
//	strncat(b, ((void *)0), 2);
//	printf("%s",b);
	return 0;


}