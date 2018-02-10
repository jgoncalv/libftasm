#include "test.h"

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
	free(s1);
	free(s2);
	free(s3);
	if (ret)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strcat_test_first_empty()
{
	char	*s1 = malloc(10);
	char	*s2 = malloc(10);

	bzero(s1, 10);
	bzero(s2, 10);
	s1 = strcat(s1, "test\0");
	s2 = ft_strcat(s2, "test\0");
	if (memcmp(s1, s2, 10))
		exit(EXIT_FAILURE);
	free(s1);
	free(s2);
	exit(EXIT_SUCCESS);
}

void	strcat_test_second_empty()
{
	char	*s1 = malloc(10);
	char	*s2 = malloc(10);

	bzero(s1, 10);
	bzero(s2, 10);
	s1 = memcpy(s1, "test", 4);
	s2 = memcpy(s2, "test", 4);
	s1 = strcat(s1, "");
	s2 = ft_strcat(s2, "");
	if (memcmp(s1, s2, 10))
		exit(EXIT_FAILURE);
	free(s1);
	free(s2);
	exit(EXIT_SUCCESS);
}

void	strcat_test_both_empty()
{
	char	*s1 = malloc(10);
	char	*s2 = malloc(10);

	bzero(s1, 10);
	bzero(s2, 10);
	s1 = memcpy(s1, "test", 4);
	s2 = memcpy(s2, "test", 4);
	s1 = strcat(s1, "");
	s2 = ft_strcat(s2, "");
	if (memcmp(s1, s2, 10))
		exit(EXIT_FAILURE);
	free(s1);
	free(s2);
	exit(EXIT_SUCCESS);
}

void	strcat_test_first_null()
{
	ft_strcat(NULL, "\0");
	exit(EXIT_SUCCESS);
}

void	strcat_test_second_null()
{
	char	*s = malloc(1);

	s[0] = 0;
	ft_strcat(s, NULL);
	free(s);
	exit(EXIT_SUCCESS);
}

void	strcat_test_both_null()
{
	ft_strcat(NULL, NULL);
	exit(EXIT_SUCCESS);
}