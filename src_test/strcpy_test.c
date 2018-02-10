#include "test.h"

void	strcpy_test()
{
	int		len = strlen(STR_TEST);
	char	*s1 = STR_TEST;
	char	*s2 = malloc(len);
	int		ret;

	s2 = ft_strcpy(s2, s1);
	ret = strcmp(s1, s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strcpy_test_first_null()
{
	ft_strcpy(NULL, STR_TEST);
	exit(EXIT_FAILURE);
}

void	strcpy_test_second_null()
{
	ft_strcpy(STR_TEST, NULL);
	exit(EXIT_SUCCESS);
}

void	strcpy_test_both_null()
{
	ft_strcpy(NULL, NULL);
	exit(EXIT_SUCCESS);
}