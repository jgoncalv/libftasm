#include "test.h"

void	memcpy_test()
{
	int		len = strlen(STR_TEST) + 1;
	char	*s1 = malloc(len);
	char	*s2 = malloc(len);
	int		ret;

	memcpy(s1, s2, len);
	ft_memcpy(s1, s2, len);
	ret = memcmp(s1, s2, len);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	memcpy_test_first_null()
{
	ft_memcpy(NULL, "[]", 2);
	exit(EXIT_FAILURE);
}

void	memcpy_test_second_null()
{
	ft_memcpy(malloc(1), NULL, 2);
	exit(EXIT_FAILURE);
}
void	memcpy_test_zero()
{
	ft_memcpy(NULL, NULL, 0);
	exit(EXIT_SUCCESS);
}