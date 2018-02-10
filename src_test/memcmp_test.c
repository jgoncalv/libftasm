#include "test.h"

void	memcmp_test()
{
	int		len = strlen(STR_TEST) + 1;
	char	*s1 = STR_TEST;
	char	*s2 = STR_TEST;

	int r1 = memcmp(s1, s2, len);
	int r2 = ft_memcmp(s1, s2, len);
	if (r1 != r2)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	memcmp_test_not_equal()
{
	char	*s1 = "hello";
	char	*s2 = "hexlo";
	int		len = 5;
	int 	r1 = memcmp(s1, s2, len);
	int 	r2 = ft_memcmp(s1, s2, len);
	if (r1 != r2)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	memcmp_test_first_null()
{
	ft_memcmp(NULL, "[]", 2);
	exit(EXIT_FAILURE);
}

void	memcmp_test_second_null()
{
	ft_memcmp(malloc(1), NULL, 2);
	exit(EXIT_FAILURE);
}
void	memcmp_test_zero()
{
	ft_memcmp(NULL, NULL, 0);
	exit(EXIT_SUCCESS);
}