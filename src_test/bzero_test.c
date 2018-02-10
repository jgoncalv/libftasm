#include "test.h"

void	bzero_test()
{
	int		len = strlen(STR_TEST);
	char	*s1 = strdup(STR_TEST);
	char	*s2 = strdup(STR_TEST);
	int		ret;

	bzero(s2, len);
	ft_bzero(s1, len);
	ret = memcmp(s1, s2, len);
	free(s1);
	free(s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	bzero_test_null()
{
	ft_bzero(NULL, 42);
	exit(EXIT_SUCCESS);
}

void	bzero_test_overflow()
{
	char	*s = malloc(1);

	ft_bzero(s, -1);
	free(s);
	exit(EXIT_SUCCESS);
}
