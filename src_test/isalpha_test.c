#include "test.h"

void	isalpha_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isalpha(i) != isalpha(i))
			exit(FAIL);
	exit(OK);
}