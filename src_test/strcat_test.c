#include "test.h"

# define STR_STRCAT_TEST "Les serpents ont des ailes.\n"

void	strcat_test()
{
	int		len = strlen(STR_TEST) + strlen(STR_STRCAT_TEST);
	char	*s1 = strdup(STR_TEST);
	char	*s2 = malloc(len);
	char	*s3 = malloc(len);
	int		ret;

	bzero(s2, len);
	bzero(s3, len);
	strcpy(s2, STR_STRCAT_TEST);
	strcpy(s3, STR_STRCAT_TEST);
	strcat(s2, s1);
	ft_strcat(s3, s1);
	ret = memcmp(s2, s3, len);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (s3)
		free(s3);
	if (ret)
		exit(FAIL);
	exit(OK);
}