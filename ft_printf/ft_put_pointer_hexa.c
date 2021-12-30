#include "ft_printf.h"
#include "libft.h"

int	ft_put_pointer_hexa(void *ptr)
{
	unsigned long	address;
	char			*prefix;
	char			*address_hex;
	char			*str;
	size_t			count_chars;

	address = (unsigned long)ptr;
	prefix = "0x";
	address_hex = func_unsigned_ltoa_base(address, LOWER_HEXBASE);
	str = ft_strjoin(prefix, address_hex);
	ft_putstr_fd(str, 1);
	count_chars = ft_strlen(str);
	free(prefix);
	free(address_hex);
	free(str);
	return (count_chars);
}
