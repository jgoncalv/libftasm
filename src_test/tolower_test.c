#include "test.h"

void	tolower_test()
{
	for (int i = -255; i < 256; i++)
		if (ft_tolower(i) != tolower(i))
			exit(FAIL);
	exit(OK);
}