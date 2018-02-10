#include "test.h"

void	memset_test()
{
	int		len = strlen(STR_TEST) + 1;
	char	*s1 = strdup(STR_TEST);
	char	*s2 = strdup(STR_TEST);
	int		ret;

	memset(s1, 42, len);
	ft_memset(s2, 42, len);
	ret = memcmp(s1, s2, len);
	free(s1);
	free(s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	memset_test_null()
{
	ft_memset(NULL, 0, 42);
	exit(EXIT_FAILURE);
}

void	memset_test_zero()
{
	ft_memset(NULL, 0, 0);
	exit(EXIT_SUCCESS);
}