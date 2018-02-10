#include "test.h"

void	strcmp_test()
{
	char	*s1 = STR_TEST;
	char	*s2 = STR_TEST;

	int r1 = strcmp(s1, s2);
	int r2 = ft_strcmp(s1, s2);
	if (r1 != r2)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strcmp_test_not_equal()
{
	char	*s1 = "hellow";
	char	*s2 = "hello";
	int 	r1 = strcmp(s1, s2);
	int 	r2 = ft_strcmp(s1, s2);
	if (r1 != r2)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strcmp_test_first_null()
{
	ft_strcmp(NULL, "[]");
	exit(EXIT_FAILURE);
}

void	strcmp_test_second_null()
{
	ft_strcmp(STR_TEST, NULL);
	exit(EXIT_FAILURE);
}
