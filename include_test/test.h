#ifndef TEST_H
# define TEST_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <ctype.h>
# include <sys/mman.h>
# include <string.h>
# include "libfts.h"

# define STR_TEST "Les Poules Ont Des Dents\n"
# define STR_STRCAT_TEST "Les serpents ont des ailes.\n"
# define OPEN_FILENAME "./Makefile"
# define STR_GOOD_END "Les canards cancanes.\n\0 Mais ne le dis à personnes.\n"


int		g_status;

typedef struct		s_fct
{
	char			*message;
	void			(*f)();
	int				expect;
}					t_fct;


void	bzero_test();
void	bzero_test_null();
void	bzero_test_overflow();
void	strcat_test();
void	strcat_test_first_empty();
void	strcat_test_second_empty();
void	strcat_test_both_empty();
void	strcat_test_first_null();
void	strcat_test_second_null();
void	strcat_test_both_null();
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
void	puts_test_detect_end();
void	puts_test_null();
void	strlen_test();
void	strlen_test_detect_end();
void	strlen_test_null();
void	memset_test();
void	memset_test_null();
void	memset_test_zero();
void	memcpy_test();
void	memcpy_test_first_null();
void	memcpy_test_second_null();
void	memcpy_test_zero();
void	strdup_test();
void	strdup_test_detect_end();
void	strdup_test_null();
void	cat_test();
void	cat_test_fd_neg();
void	memcmp_test();
void	memcmp_test_not_equal();
void	memcmp_test_first_null();
void	memcmp_test_second_null();
void	memcmp_test_zero();
void	strcpy_test();
void	strcpy_test_first_null();
void	strcpy_test_second_null();
void	strcpy_test_both_null();
void	strcmp_test();
void	strcmp_test_not_equal();
void	strcmp_test_first_null();
void	strcmp_test_second_null();

#endif