#include <stdio.h>
#include "libft/libft.h"

/*
** Basic
*/

// void	test_ft_atoi();
// void	test_ft_itoa();
// void	test_ft_isupper();	// TODO
// void	test_ft_islower();	// TODO

/*
** Bonus (subject)
*/

// void	test_ft_lstadd();
// void	test_ft_lstdel();

/*
** Bonus (my)
*/

// void	test_ft_atoi_base();
// void	test_ft_lstaddb();

/*
** Del
*/

// void	test_ft_atoill();

int		main(void)
{

	char *s;

	s = ft_memalloc(42);
	/*
	** Basic
	*/

	// test_ft_atoi();
	// test_ft_itoa();

	/*
	** Bonus (subject)
	*/

	// test_ft_lstadd();
	// test_ft_lstdel();


	/*
	** Bonus (my)
	*/

	// test_ft_atoi_base();
	// test_ft_lstaddb();

	/*
	** Del
	*/

	// test_ft_atoill();
	return (0);
}

// void	test_ft_atoi()
// {
// 	/*
// 	** my ft_atoi vs original atoi
// 	*/

// 	printf("\n>>>>> ft_atoi <<<<<\n\nfirst - ft_atoi\nsecond - atoi\n\n");
// 	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
// 		ft_atoi("-2147483648"), atoi("-2147483648"),
// 		ft_atoi("2147483648"), atoi("2147483648"),
// 		ft_atoi("021"), atoi("021"),
// 		ft_atoi("-021"), atoi("-021"),
// 		ft_atoi("0"), atoi("0"),
// 		ft_atoi("-0"), atoi("-0"),
// 		ft_atoi("+99"), atoi("+99"),
// 		ft_atoi("1000000"), atoi("1000000"),
// 		ft_atoi("+0"), atoi("+0"),
// 		ft_atoi("709551615"), atoi("709551615"),
// 		ft_atoi("+-5"), atoi("+-5"),
// 		ft_atoi("-a1"), atoi("-a1"),
// 		ft_atoi("15a"), atoi("15a"),
// 		ft_atoi("222222222222222222"), atoi("222222222222222222"),
// 		ft_atoi("2222222222222222222"), atoi("2222222222222222222"),
// 		ft_atoi("222222222222222222222"), atoi("222222222222222222222"),
// 		ft_atoi("-932222222222222222222"), atoi("-932222222222222222222"),
// 		ft_atoi("932222222222222222222"), atoi("932222222222222222222"),
// 		ft_atoi("93222222222222222222"), atoi("93222222222222222222"),
// 		ft_atoi("-9223372036854775808"), atoi("-9223372036854775808"),
// 		ft_atoi("9223372036854775806"), atoi("9223372036854775806"),
// 		ft_atoi("9223372036854775807"), atoi("9223372036854775807"),
// 		ft_atoi("9223372036854775808"), atoi("9223372036854775808")
// 		);
// 	// printf("%d\n", atoi(NULL)); // segmentation fault
// }

// void	test_ft_itoa()
// {
// 	/*
// 	** my ft_itoa vs string
// 	*/

// 	printf("\n>>>>> ft_itoa <<<<<\n\nfirst - ft_itoa\nsecond - string\n\n");
// 	printf("%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n",
// 		ft_itoa(-2147483648), "-2147483648",
// 		ft_itoa(2147483647), "2147483647",
// 		ft_itoa(21), "21",
// 		ft_itoa(-21), "-21",
// 		ft_itoa(0), "0",
// 		ft_itoa(+0), "0",
// 		ft_itoa(-0), "0",
// 		ft_itoa(+99), "99",
// 		ft_itoa(99999), "99999",
// 		ft_itoa(1000000), "1000000",
// 		ft_itoa(709551615), "709551615"
// 		);
// }

/*
** Bonus (subject)
*/

// void	test_ft_lstadd()
// {
// 	/*
// 	** my ft_lstadd
// 	*/

// 	t_list	lst;
// 	t_list	**temp;

// 	printf("\n>>>>> ft_lstadd <<<<<\n\n");
// 	temp = (t_list **)malloc(sizeof(t_list *));
// 	temp[0] = NULL; // add lst in front of the NULL
// 	ft_lstadd(temp, &lst);
// 	temp = NULL;
// 	ft_lstadd(temp, &lst);
// 	free(temp);
// 	printf("\nft_lstadd OK\n\n");
// }

// void	test_ft_lstdel()
// {
// 	/*
// 	** my ft_lstdel
// 	*/

// 	t_list	*begin;
// 	t_list	**temp;

// 	printf("\n>>>>> ft_lstdel <<<<<\n\n");
// 	begin = ft_lstnew("zero", 4);
// 	temp = (t_list **)malloc(sizeof(t_list *));
// 	temp[0] = NULL;
// 	ft_lstdel(temp, &ft_contentdel);
// 	ft_lstaddb(&begin, ft_lstnew("one", 3));
// 	ft_lstaddb(&begin, ft_lstnew("two", 3));
// 	ft_lstaddb(&begin, ft_lstnew("three", 5));
// 	ft_lstprint(begin);
// 	ft_lstdel(&begin, &ft_contentdel);
// 	free(temp);
// 	printf("\nft_lstdel OK\n\n");
// }

/*
** Bonus (my)
*/

// void	test_ft_lstaddb()
// {
// 	/*
// 	** my ft_lstaddb
// 	*/

// 	t_list	lst;
// 	t_list	**temp;

// 	printf("\n>>>>> ft_lstaddb <<<<<\n\n");
// 	temp = (t_list **)malloc(sizeof(t_list *));
// 	temp[0] = NULL; // add lst in front of the NULL
// 	ft_lstaddb(temp, &lst);
// 	temp = NULL;
// 	ft_lstaddb(temp, &lst);
// 	printf("\nft_lstaddb OK\n\n");
// }

// void	test_ft_atoi_base()
// {
// 	/*
// 	** my ft_atoi_base vs original atoi
// 	*/

// 	printf("\n>>>>> ft_atoi_base <<<<<\n\nfirst - ft_atoi_base\nsecond - atoi\n\n");
// 	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
// 		ft_atoi_base("-2147483648", 10), atoi("-2147483648"),
// 		ft_atoi_base("2147483647", 10), atoi("2147483647"),
// 		ft_atoi_base("021", 10), atoi("021"),
// 		ft_atoi_base("-021", 10), atoi("-021"),
// 		ft_atoi_base("0", 10), atoi("0"),
// 		ft_atoi_base("-0", 10), atoi("-0"),
// 		ft_atoi_base("+99", 10), atoi("+99"),
// 		ft_atoi_base("1000000", 10), atoi("1000000"),
// 		ft_atoi_base("+0", 10), atoi("+0"),
// 		ft_atoi_base("709551615", 10), atoi("709551615"),
// 		ft_atoi_base("+-5", 10), atoi("+-5"),
// 		ft_atoi_base("-k1", 10), atoi("-k1"),
// 		ft_atoi_base("15a", 10), atoi("15a"),
// 		ft_atoi_base("a15", 10), atoi("a15"),
// 		ft_atoi_base("A15", 10), atoi("A15"),
// 		ft_atoi_base("0xa15", 10), atoi("0xa15"),
// 		ft_atoi_base("222222222222222222", 10), atoi("222222222222222222"),
// 		ft_atoi_base("2222222222222222222", 10), atoi("2222222222222222222"),
// 		ft_atoi_base("222222222222222222222", 10), atoi("222222222222222222222"),
// 		ft_atoi_base("-932222222222222222222", 10), atoi("-932222222222222222222"),
// 		ft_atoi_base("932222222222222222222", 10), atoi("932222222222222222222"),
// 		ft_atoi_base("93222222222222222222", 10), atoi("93222222222222222222"),
// 		ft_atoi_base("-9223372036854775809", 10), atoi("-9223372036854775809"),
// 		ft_atoi_base("9223372036854775809", 10), atoi("9223372036854775809"),
// 		ft_atoi_base("ff", 16), atoi("255"),
// 		ft_atoi_base("AF", 16), atoi("175"),
// 		ft_atoi_base("-ff1", 16), atoi("-4081"),
// 		ft_atoi_base("-AF0", 16), atoi("-2800"),
// 		ft_atoi_base("7fffffff", 16), atoi("2147483647"),
// 		ft_atoi_base("-80000000", 16), atoi("-2147483648"),
// 		ft_atoi_base("7ffffffff", 16), atoi("34359738367"),
// 		ft_atoi_base("0X1AD", 16), atoi("429"),
// 		ft_atoi_base("-0x1bb", 16), atoi("-433"),
// 		ft_atoi_base("+0x0001f2d", 16), atoi("7981"),
// 		ft_atoi_base("-0709551615", 8), atoi("-56"),
// 		ft_atoi_base("0b00000010", 2), atoi("2"),
// 		ft_atoi_base("-0b1bb", 2), atoi("-1"),
// 		ft_atoi_base("-0x1bb", 2), atoi("0"),
// 		ft_atoi_base("222222222222222222222", 8), atoi("2635249153387078802")
// 		);
// 	printf("NULL\n%d\n", ft_atoi_base(NULL, 10)); // no segmentation fault
// }

/*
** Del
*/

// void	test_ft_atoill()
// {
// 	/*
// 	** my ft_atoill vs original atoi
// 	*/

// 	printf("\n>>>>> ft_atoill <<<<<\n\nfirst - ft_atoill\nsecond - atoi\n\n");
// 	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
// 		ft_atoill("-2147483648"), atoi("-2147483648"),
// 		ft_atoill("2147483648"), atoi("2147483648"),
// 		ft_atoill("021"), atoi("021"),
// 		ft_atoill("-021"), atoi("-021"),
// 		ft_atoill("0"), atoi("0"),
// 		ft_atoill("-0"), atoi("-0"),
// 		ft_atoill("+99"), atoi("+99"),
// 		ft_atoill("1000000"), atoi("1000000"),
// 		ft_atoill("+0"), atoi("+0"),
// 		ft_atoill("709551615"), atoi("709551615"),
// 		ft_atoill("+-5"), atoi("+-5"),
// 		ft_atoill("-a1"), atoi("-a1"),
// 		ft_atoill("15a"), atoi("15a"),
// 		ft_atoill("222222222222222222"), atoi("222222222222222222"),
// 		ft_atoill("2222222222222222222"), atoi("2222222222222222222"),
// 		ft_atoill("222222222222222222222"), atoi("222222222222222222222"),
// 		ft_atoill("-932222222222222222222"), atoi("-932222222222222222222"),
// 		ft_atoill("932222222222222222222"), atoi("932222222222222222222"),
// 		ft_atoill("93222222222222222222"), atoi("93222222222222222222"),
// 		ft_atoill("-9223372036854775809"), atoi("-9223372036854775809"),
// 		ft_atoill("9223372036854775809"), atoi("9223372036854775809")
// 		);
// 	printf("NULL\n%d\n", ft_atoill(NULL)); // no segmentation fault
// }
