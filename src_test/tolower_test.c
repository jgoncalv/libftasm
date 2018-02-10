#include "test.h"

void	tolower_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_tolower(i) != tolower(i))
			exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}