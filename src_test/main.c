#include "test.h"

static t_fct	g_fct[] = {
	{"ft_bzero", &bzero_test},
	{"ft_strcat", &strcat_test},
	{"ft_isalpha", &isalpha_test},
	{"ft_isdigit", &isdigit_test},
	{"ft_isalnum", &isalnum_test},
	{"ft_isascii", &isascii_test},
	{"ft_isprint", &isprint_test},
	{"ft_islower", &islower_test},
	{"ft_isupper", &isupper_test},
	{"ft_toupper", &toupper_test},
	{"ft_tolower", &tolower_test},
	{"ft_puts", &puts_test},
	{"ft_strlen", &strlen_test},
	{"ft_memset", &memset_test},
	{"ft_memcpy", &memcpy_test},
	{"ft_strdup", &strdup_test},
	{"ft_cat", &cat_test},
	{0, 0}
};


static void	handle_status(int status)
{
	if (status)
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
			handle_status(g_status);
		}
	}
	return (0);
}