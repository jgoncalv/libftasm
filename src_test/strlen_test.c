#include "test.h"

void	strlen_test()
{
	if (ft_strlen(STR_TEST) != strlen(STR_TEST))
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strlen_test_detect_end()
{
	if (ft_strlen(STR_GOOD_END) != strlen(STR_GOOD_END))
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}

void	strlen_test_null()
{
	ft_strlen(NULL);
	exit(EXIT_FAILURE);
}