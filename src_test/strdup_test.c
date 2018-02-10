#include "test.h"

void	strdup_test()
{
	int		len = strlen(STR_TEST) + 1;
	char	*s1 = strdup(STR_TEST);
	char	*s2 = ft_strdup(STR_TEST);
	int		ret;

	ret = memcmp(s1, s2, len);
	free(s1);
	free(s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strdup_test_detect_end()
{
	int		len = strlen(STR_GOOD_END) + 1;
	char	*s1 = strdup(STR_GOOD_END);
	char	*s2 = ft_strdup(STR_GOOD_END);
	int		ret;

	ret = memcmp(s1, s2, len);
	free(s1);
	free(s2);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strdup_test_null()
{
	ft_strdup(NULL);
	exit(EXIT_FAILURE);
}