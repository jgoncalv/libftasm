#include "test.h"

void	isalnum_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isalnum(i) != isalnum(i))
			exit(FAIL);
	exit(OK);
}