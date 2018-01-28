#include "test.h"

void	puts_test()
{
	int		len = strlen(STR_TEST);
	int		ret;
	char	buf[len];
	int		pipefd[2];

	pipe(pipefd);
	dup2(pipefd[1], 1);
	close(pipefd[1]);

	ft_puts(STR_TEST);
	ret = read(pipefd[0], &buf, len);
	if (ret != len || memcmp(buf, STR_TEST, len))
		exit(FAIL);
	exit(OK);
}
