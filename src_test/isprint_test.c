#include "test.h"

void	isprint_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_isprint(i) != isprint(i))
			exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}