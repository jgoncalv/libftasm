#ifndef TEST_H
# define TEST_H

# include <string.h>
# include "libfts.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

# define STR_TEST "Les Poules Ont Des Dents\n"
# define OPEN_FILENAME "./Makefile"

# define OK		0
# define FAIL	1

int		g_status;

typedef struct		s_fct
{
	char			*message;
	void			(*f)();
}					t_fct;


void	bzero_test();
void	strcat_test();
void	isalpha_test();
void	isdigit_test();
void	isalnum_test();
void	isascii_test();
void	isprint_test();
void	islower_test();
void	isupper_test();
void	toupper_test();
void	tolower_test();
void	puts_test();
void	strlen_test();
void	memset_test();
void	memcpy_test();
void	strdup_test();

#endif