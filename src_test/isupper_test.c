#include "test.h"

void	isupper_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isupper(i) != isupper(i))
			exit(FAIL);
	exit(OK);
}