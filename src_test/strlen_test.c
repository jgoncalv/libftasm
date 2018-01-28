#include "test.h"

void	strlen_test()
{
	if (ft_strlen(STR_TEST) != strlen(STR_TEST))
		exit(FAIL);
	exit(OK);
}