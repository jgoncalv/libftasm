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
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (ret)
		exit(FAIL);
	exit(OK);
}