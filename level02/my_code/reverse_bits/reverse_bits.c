#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7 |
			((octet >> 1) & 1) << 6 |
			((octet >> 2) & 1) << 5 |
			((octet >> 3) & 1) << 4 |
			((octet >> 4) & 1) << 3 |
			((octet >> 5) & 1) << 2 |
			((octet >> 6) & 1) << 1 |
			((octet >> 7) & 1) << 0);
}

int		main(void)
{
	print_bits('A');
	write(1, "\n", 1);
	print_bits(reverse_bits('A'));
	return (0);
}
