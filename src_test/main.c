#include "test.h"

static t_fct	g_fct[] = {
	{"ft_bzero", &bzero_test, EXIT_SUCCESS},
	{"ft_bzero_null", &bzero_test_null, SIGSEGV},
	{"ft_bzero_overflow", &bzero_test_overflow, SIGSEGV},
	{"ft_strcat", &strcat_test, EXIT_SUCCESS},
	{"ft_strcat_first_empty", &strcat_test_first_empty, EXIT_SUCCESS},
	{"ft_strcat_second_empty", &strcat_test_second_empty, EXIT_SUCCESS},
	{"ft_strcat_both_empty", &strcat_test_both_empty, EXIT_SUCCESS},
	{"ft_strcat_first_null", &strcat_test_first_null, SIGSEGV},
	{"ft_strcat_second_null", &strcat_test_second_null, SIGSEGV},
	{"ft_strcat_both_null", &strcat_test_both_null, SIGSEGV},
	{"ft_isalpha", &isalpha_test, EXIT_SUCCESS},
	{"ft_isdigit", &isdigit_test, EXIT_SUCCESS},
	{"ft_isalnum", &isalnum_test, EXIT_SUCCESS},
	{"ft_isascii", &isascii_test, EXIT_SUCCESS},
	{"ft_isprint", &isprint_test, EXIT_SUCCESS},
	{"ft_islower", &islower_test, EXIT_SUCCESS},
	{"ft_isupper", &isupper_test, EXIT_SUCCESS},
	{"ft_toupper", &toupper_test, EXIT_SUCCESS},
	{"ft_tolower", &tolower_test, EXIT_SUCCESS},
	{"ft_puts", &puts_test, EXIT_SUCCESS},
	{"ft_puts_detect_end", &puts_test_detect_end, EXIT_SUCCESS},
	{"ft_puts_null", &puts_test_null, SIGSEGV},
	{"ft_strlen", &strlen_test, EXIT_SUCCESS},
	{"ft_strlen_detect_end", &strlen_test_detect_end, EXIT_SUCCESS},
	{"ft_strlen_null", &strlen_test_null, SIGSEGV},
	{"ft_memset", &memset_test, EXIT_SUCCESS},
	{"ft_memset_null", &memset_test_null, SIGSEGV},
	{"ft_memset_zero", &memset_test_zero, EXIT_SUCCESS},
	{"ft_memcpy", &memcpy_test, EXIT_SUCCESS},
	{"ft_memcpy_first_null", &memcpy_test_first_null, SIGSEGV},
	{"ft_memcpy_second_null", &memcpy_test_second_null, SIGSEGV},
	{"ft_memcpy_zero", &memcpy_test_zero, EXIT_SUCCESS},
	{"ft_strdup", &strdup_test, EXIT_SUCCESS},
	{"ft_strdup_detect_end", &strdup_test_detect_end, EXIT_SUCCESS},
	{"ft_strdup_null", &strdup_test_null, SIGSEGV},
	{"ft_cat", &cat_test, EXIT_SUCCESS},
	{"ft_cat_fd_neg", &cat_test_fd_neg, EXIT_SUCCESS},
	{"ft_memcmp", &memcmp_test, EXIT_SUCCESS},
	{"ft_memcmp_not_equal", &memcmp_test_not_equal, EXIT_SUCCESS},
	{"ft_memcmp_first_null", &memcmp_test_first_null, SIGSEGV},
	{"ft_memcmp_second_null", &memcmp_test_second_null, SIGSEGV},
	{"ft_memcmp_zero", &memcmp_test_zero, EXIT_SUCCESS},
	{"ft_strcpy", &strcpy_test, EXIT_SUCCESS},
	{"ft_strcpy_first_null", &strcpy_test_first_null, SIGSEGV},
	{"ft_strcpy_second_null", &strcpy_test_second_null, SIGSEGV},
	{"ft_strcpy_both_null", &strcpy_test_both_null, SIGSEGV},
	{"ft_strcmp", &strcmp_test, EXIT_SUCCESS},
	{"ft_strcmp_not_equal", &strcmp_test_not_equal, EXIT_SUCCESS},
	{"ft_strcmp_first_null", &strcmp_test_first_null, SIGSEGV},
	{"ft_strcmp_second_null", &strcmp_test_second_null, SIGSEGV},
	{0, 0, 0}
};


static void	handle_status(int status, int expect)
{
	int	sig;

	if (WIFSIGNALED(status))
	{
		sig = WTERMSIG(status);
		if (sig == expect)
			write(1, ": 😀\n", 7);
		else
			write(1, ": 😈\n", 7);
	}
	else if (expect != status)
		write(1, ": 😈\n", 7);
	else
		write(1, ": 😀\n", 7);
}

int 		main( void )
{
	pid_t pid;

	for (int i = 0; g_fct[i].message != NULL; ++i)
	{
		write(1, g_fct[i].message, strlen(g_fct[i].message));
		if (!(pid = fork()))
		{
			g_fct[i].f();
		}
		else
		{
			wait(&g_status);
			handle_status(g_status, g_fct[i].expect);
		}
	}
	return (0);
}