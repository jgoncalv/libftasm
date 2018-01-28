#include "test.h"

void	isascii_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isascii(i) != isascii(i))
			exit(FAIL);
	exit(OK);
}