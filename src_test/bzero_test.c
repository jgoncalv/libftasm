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
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (ret)
		exit(FAIL);
	exit(OK);
}
