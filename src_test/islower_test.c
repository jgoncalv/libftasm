#include "test.h"

void	islower_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_islower(i) != islower(i))
			exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}