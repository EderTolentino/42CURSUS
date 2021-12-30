#include "ft_printf.h"
#include "libft.h"

int	ft_put_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
