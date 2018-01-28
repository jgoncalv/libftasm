#include "test.h"

void	strdup_test()
{
	int		len = strlen(STR_TEST) + 1;
	char	*s1 = strdup(STR_TEST);
	char	*s2 = ft_strdup(STR_TEST);
	int		ret;

	ret = memcmp(s1, s2, len);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (ret)
		exit(FAIL);
	exit(OK);
}