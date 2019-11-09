#include <stdio.h>
#include "libft/libft.h"

void	test_ft_atoi();
void	test_ft_atoill();

int		main(void)
{
	test_ft_atoi();
	test_ft_atoill();
	return (0);
}

void	test_ft_atoi()
{
	/*
	** my ft_atoi() vs original atoi()
	*/

	printf("\n>>>>> ft_atoi() <<<<<\n\nfirst - ft_atoi()\nsecond - atoi()\n\n");
	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
		ft_atoi("-2147483648"), atoi("-2147483648"),
		ft_atoi("2147483648"), atoi("2147483648"),
		ft_atoi("021"), atoi("021"),
		ft_atoi("-021"), atoi("-021"),
		ft_atoi("0"), atoi("0"),
		ft_atoi("-0"), atoi("-0"),
		ft_atoi("+99"), atoi("+99"),
		ft_atoi("1000000"), atoi("1000000"),
		ft_atoi("+0"), atoi("+0"),
		ft_atoi("709551615"), atoi("709551615"),
		ft_atoi("+-5"), atoi("+-5"),
		ft_atoi("-a1"), atoi("-a1"),
		ft_atoi("15a"), atoi("15a"),
		ft_atoi("222222222222222222"), atoi("222222222222222222"),
		ft_atoi("2222222222222222222"), atoi("2222222222222222222"),
		ft_atoi("222222222222222222222"), atoi("222222222222222222222"),
		ft_atoi("-932222222222222222222"), atoi("-932222222222222222222"),
		ft_atoi("932222222222222222222"), atoi("932222222222222222222"),
		ft_atoi("93222222222222222222"), atoi("93222222222222222222"),
		ft_atoi("-9223372036854775808"), atoi("-9223372036854775808"),
		ft_atoi("9223372036854775809"), atoi("9223372036854775809")
		);
	// printf("%d\n", atoi(NULL)); // segmentation fault
}

void	test_ft_atoill()
{
	/*
	** my ft_atoill() vs original atoi()
	*/

	printf("\n>>>>> ft_atoill() <<<<<\n\nfirst - ft_atoill()\nsecond - atoi()\n\n");
	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
		ft_atoill("-2147483648"), atoi("-2147483648"),
		ft_atoill("2147483648"), atoi("2147483648"),
		ft_atoill("021"), atoi("021"),
		ft_atoill("-021"), atoi("-021"),
		ft_atoill("0"), atoi("0"),
		ft_atoill("-0"), atoi("-0"),
		ft_atoill("+99"), atoi("+99"),
		ft_atoill("1000000"), atoi("1000000"),
		ft_atoill("+0"), atoi("+0"),
		ft_atoill("709551615"), atoi("709551615"),
		ft_atoill("+-5"), atoi("+-5"),
		ft_atoill("-a1"), atoi("-a1"),
		ft_atoill("15a"), atoi("15a"),
		ft_atoill("222222222222222222"), atoi("222222222222222222"),
		ft_atoill("2222222222222222222"), atoi("2222222222222222222"),
		ft_atoill("222222222222222222222"), atoi("222222222222222222222"),
		ft_atoill("-932222222222222222222"), atoi("-932222222222222222222"),
		ft_atoill("932222222222222222222"), atoi("932222222222222222222"),
		ft_atoill("93222222222222222222"), atoi("93222222222222222222"),
		ft_atoill("-9223372036854775809"), atoi("-9223372036854775809"),
		ft_atoill("9223372036854775809"), atoi("9223372036854775809")
		);
	// printf("%d\n", atoi(NULL)); // segmentation fault
}
