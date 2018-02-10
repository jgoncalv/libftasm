#include "test.h"

void	isdigit_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isdigit(i) != isdigit(i))
			exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}