#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				num_of_byte;
	unsigned char	bit;

	bit = octet;
	num_of_byte = 8;
	while (num_of_byte--)
	{
		bit = (octet >> num_of_byte & 1) + '0';
		write(1, &bit, 1);
	}
}

int		main(void)
{
	print_bits(2);
	return (0);
}
