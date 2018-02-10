#include "test.h"

void	cat_test()
{
	char		*ptr;
	int			len;
	int			ret;
	int			fd;
	struct stat	sbuf;
	int			pipefd[2];

	pipe(pipefd);
	dup2(pipefd[1], 1);
	close(pipefd[1]);

	if ((fd = open(OPEN_FILENAME, O_RDONLY)) < 1 || fstat(fd, &sbuf) < 0)
		exit(EXIT_FAILURE);
	if ((ptr = mmap(0, sbuf.st_size, PROT_READ, MAP_PRIVATE, fd, 0)) == MAP_FAILED)
		exit(EXIT_FAILURE);
	len = strlen(ptr);
	char	buf[len];
	ft_cat(fd);
	ret = read(pipefd[0], &buf, len);
	if (ret != len || strncmp(buf, ptr, len))
		exit(EXIT_FAILURE);
	munmap(ptr, sbuf.st_size);
	exit(EXIT_SUCCESS);
}

void	cat_test_fd_neg()
{
	ft_cat(-42);
	exit(EXIT_SUCCESS);
}