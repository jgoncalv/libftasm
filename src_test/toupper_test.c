#include "test.h"

void	toupper_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_toupper(i) != toupper(i))
			exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}