#include <stdio.h>
#include "libft/libft.h"

/*
** Basic
*/

void	test_ft_atoi();
void	test_ft_itoa();
// void	test_ft_islower();	// TODO
// void	test_ft_isupper();	// TODO
void	test_ft_strlcat();

/*
** Bonus (subject)
*/

void	test_ft_lstadd();
void	test_ft_lstdel();
void	test_ft_lstmap();
void	test_ft_lstnew();
void	test_ft_strjoin();

/*
** Bonus (my)
*/

void	test_ft_atoi_base();
void	test_ft_lstaddb();
void	test_ft_lstdestroy();
void	test_ft_memjoin();
void	test_ft_memswap();
void	test_ft_strpos();
void	test_ft_lstccldetect();

/*
** Del
*/

// void	test_ft_atoill();

int		main(void)
{
	/*
	** Basic
	*/

	test_ft_atoi();
	test_ft_itoa();
	test_ft_strlcat();

	/*
	** Bonus (subject)
	*/

	test_ft_lstadd();
	test_ft_lstdel();
	test_ft_lstmap();
	test_ft_strjoin();

	/*
	** Bonus (my)
	*/

	test_ft_atoi_base();
	test_ft_lstaddb();
	test_ft_lstdestroy();
	test_ft_lstnew();
	test_ft_memjoin();
	test_ft_memswap();
	test_ft_strpos();
	test_ft_lstccldetect();

	/*
	** Del
	*/

	// test_ft_atoill();
	return (0);
}

/*
** Basic
*/

void	test_ft_atoi()
{
	/*
	** my ft_atoi vs original atoi
	*/

	printf("\n>>>>> ft_atoi <<<<<\n\nfirst - ft_atoi\nsecond - atoi\n\n");
	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
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
		ft_atoi("9223372036854775806"), atoi("9223372036854775806"),
		ft_atoi("9223372036854775807"), atoi("9223372036854775807"),
		ft_atoi("9223372036854775808"), atoi("9223372036854775808")
		);
	// printf("%d\n", atoi(NULL)); // segmentation fault
}

void	test_ft_itoa()
{
	/*
	** my ft_itoa vs string
	*/

	printf("\n>>>>> ft_itoa <<<<<\n\nfirst - ft_itoa\nsecond - string\n\n");
	printf("%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n\n",
		ft_itoa(-2147483648), "-2147483648",
		ft_itoa(2147483647), "2147483647",
		ft_itoa(21), "21",
		ft_itoa(-21), "-21",
		ft_itoa(0), "0",
		ft_itoa(+0), "0",
		ft_itoa(-0), "0",
		ft_itoa(+99), "99",
		ft_itoa(99999), "99999",
		ft_itoa(1000000), "1000000",
		ft_itoa(709551615), "709551615"
		);
}

void	test_ft_strlcat()
{
	/*
	** my ft_strlcat
	*/

	unsigned int	std_ret;
	unsigned int	ft_ret;

	printf("\n>>>>> ft_strlcat <<<<<\n\n");
	std_ret = (unsigned int)strlcat(strdup("abc"), "ccc", 6);
	ft_ret = (unsigned int)ft_strlcat(strdup("abc"), "ccc", 6);
	printf("std_ret = %d\n", std_ret);
	printf("ft_ret = %d\n", ft_ret);
}

void	test_ft_strjoin()
{
	/*
	** my ft_strjoin
	*/

	printf("\n>>>>> ft_strjoin <<<<<\n\n");
	printf("strcmp(ft_strjoin(\"\", \"\"), \"\")) = %d\n", strcmp(ft_strjoin("", ""), ""));
}

/*
** Bonus (subject)
*/

void	test_ft_lstadd()
{
	/*
	** my ft_lstadd
	*/

	t_list	lst;
	t_list	**temp;

	printf("\n>>>>> ft_lstadd <<<<<\n\n");
	temp = (t_list **)malloc(sizeof(t_list *));
	temp[0] = NULL; // add lst in front of the NULL
	ft_lstadd(temp, &lst);
	temp = NULL;
	ft_lstadd(temp, &lst);
	free(temp);
	printf("\nft_lstadd OK\n");
}

void	test_ft_lstdel()
{
	/*
	** my ft_lstdel
	*/

	t_list	*begin;
	t_list	**temp;

	printf("\n>>>>> ft_lstdel <<<<<\n\n");
	begin = ft_lstnew("zero", 4);
	temp = (t_list **)malloc(sizeof(t_list *));
	temp[0] = NULL;
	ft_lstdel(temp, &ft_contentdel);
	ft_lstaddb(&begin, ft_lstnew("one", 3));
	ft_lstaddb(&begin, ft_lstnew("two", 3));
	ft_lstaddb(&begin, ft_lstnew("three", 5));
	ft_lstprint(begin);
	ft_lstdel(&begin, &ft_contentdel);
	free(temp);
	printf("\nft_lstdel OK\n");
}

void	test_ft_lstmap()
{
	/*
	** my ft_lstmap
	*/

	t_list	lst1;
	t_list	lst2;
	t_list	lst3;
	t_list	lst4;

	t_list	*new;
	t_list	*print;

	printf("\n>>>>> ft_lstmap <<<<<\n\n");
	lst1.next = &lst2;
	lst1.content = (void *)ft_strdup("hello");
	lst1.content_size = ft_strlen("hello");
	lst2.next = &lst3;
	lst2.content = (void *)ft_strdup("world");
	lst2.content_size = ft_strlen("world");
	lst3.next = &lst4;
	lst3.content = (void *)ft_strdup("guys!");
	lst3.content_size = ft_strlen("guys!");
	lst4.next = NULL;
	lst4.content = (void *)ft_strdup("YoyoYo!");
	lst4.content_size = ft_strlen("YoyoYo!");

	print = &lst1;
	printf("BEFORE ft_lstmap\n");
	while (print)
	{
		printf("%s ", (char *)print->content);
		print = print->next;
	}
	printf("\n");

	new = ft_lstmap(&lst1, ft_lstmod);
	print = new;
	printf("AFTER ft_lstmap\n");
	while (print)
	{
		printf("%s ", (char *)print->content);
		print = print->next;
	}
	printf("\n");

	while (new)
	{
		print = new->next;
		free(new->content);
		free(new);
		new = print;
	}

	free(lst1.content);
	free(lst2.content);
	free(lst3.content);
	free(lst4.content);
	printf("\nft_lstmap OK\n");
}

void	test_ft_lstnew()
{
	/*
	** my ft_lstnew
	*/

	char *data = "hello, i'm a data";
	t_list *temp;

	printf("\n>>>>> ft_lstnew <<<<<\n\n");
	temp = ft_lstnew(data, strlen(data) + 1);
	if (!strcmp(data, temp->content))
		printf("\nft_lstnew OK\n");
	else
		printf("\nft_lstnew FAILED\n\n");
	free(temp->content);
	free(temp);
}

/*
** Bonus (my)
*/

void	test_ft_lstaddb()
{
	/*
	** my ft_lstaddb
	*/

	t_list	lst;
	t_list	**temp;

	printf("\n>>>>> ft_lstaddb <<<<<\n\n");
	temp = (t_list **)malloc(sizeof(t_list *));
	temp[0] = NULL; // add lst in front of the NULL
	ft_lstaddb(temp, &lst);
	free(temp);
	temp = NULL;
	ft_lstaddb(temp, &lst);
	printf("\nft_lstaddb OK\n");
}

void	test_ft_lstdestroy()
{
	/*
	** my ft_lstdestroy
	*/

	t_list	*lst1;
	t_list	*lst2;
	t_list	**temp;

	printf("\n>>>>> ft_lstdestroy <<<<<\n\n");
	temp = (t_list **)malloc(sizeof(t_list *));
	temp[0] = NULL;
	ft_lstdestroy(temp);
	free(temp);
	temp = NULL;
	ft_lstdestroy(temp);
	lst1 = (t_list *)malloc(sizeof(t_list));
	lst1->content = malloc(1);
	lst2 = (t_list *)malloc(sizeof(t_list));
	lst2->content = malloc(1);
	lst1->next = lst2;
	lst2->next = NULL;
	ft_lstdestroy(&lst1);
	// loop
	// lst1 = (t_list *)malloc(sizeof(t_list));
	// lst1->content = malloc(1);
	// lst1->next = lst2;
	// lst2->next = lst1;
	// ft_lstdestroy(&lst1);
	// loop end
	printf("\nft_lstdestroy OK\n");
}

void	test_ft_atoi_base()
{
	/*
	** my ft_atoi_base vs original atoi
	*/

	printf("\n>>>>> ft_atoi_base <<<<<\n\nfirst - ft_atoi_base\nsecond - atoi\n\n");
	printf("%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n%d\n%d\n\n",
		ft_atoi_base("-2147483648", 10), atoi("-2147483648"),
		ft_atoi_base("2147483647", 10), atoi("2147483647"),
		ft_atoi_base("021", 10), atoi("021"),
		ft_atoi_base("-021", 10), atoi("-021"),
		ft_atoi_base("0", 10), atoi("0"),
		ft_atoi_base("-0", 10), atoi("-0"),
		ft_atoi_base("+99", 10), atoi("+99"),
		ft_atoi_base("1000000", 10), atoi("1000000"),
		ft_atoi_base("+0", 10), atoi("+0"),
		ft_atoi_base("709551615", 10), atoi("709551615"),
		ft_atoi_base("+-5", 10), atoi("+-5"),
		ft_atoi_base("-k1", 10), atoi("-k1"),
		ft_atoi_base("15a", 10), atoi("15a"),
		ft_atoi_base("a15", 10), atoi("a15"),
		ft_atoi_base("A15", 10), atoi("A15"),
		ft_atoi_base("0xa15", 10), atoi("0xa15"),
		ft_atoi_base("222222222222222222", 10), atoi("222222222222222222"),
		ft_atoi_base("2222222222222222222", 10), atoi("2222222222222222222"),
		ft_atoi_base("222222222222222222222", 10), atoi("222222222222222222222"),
		ft_atoi_base("-932222222222222222222", 10), atoi("-932222222222222222222"),
		ft_atoi_base("932222222222222222222", 10), atoi("932222222222222222222"),
		ft_atoi_base("93222222222222222222", 10), atoi("93222222222222222222"),
		ft_atoi_base("-9223372036854775809", 10), atoi("-9223372036854775809"),
		ft_atoi_base("9223372036854775809", 10), atoi("9223372036854775809"),
		ft_atoi_base("ff", 16), atoi("255"),
		ft_atoi_base("AF", 16), atoi("175"),
		ft_atoi_base("-ff1", 16), atoi("-4081"),
		ft_atoi_base("-AF0", 16), atoi("-2800"),
		ft_atoi_base("7fffffff", 16), atoi("2147483647"),
		ft_atoi_base("-80000000", 16), atoi("-2147483648"),
		ft_atoi_base("7ffffffff", 16), atoi("34359738367"),
		ft_atoi_base("0X1AD", 16), atoi("429"),
		ft_atoi_base("-0x1bb", 16), atoi("-433"),
		ft_atoi_base("+0x0001f2d", 16), atoi("7981"),
		ft_atoi_base("-0709551615", 8), atoi("-56"),
		ft_atoi_base("0b00000010", 2), atoi("2"),
		ft_atoi_base("-0b1bb", 2), atoi("-1"),
		ft_atoi_base("-0x1bb", 2), atoi("0"),
		ft_atoi_base("222222222222222222222", 8), atoi("2635249153387078802")
		);
	printf("NULL\n%d\n", ft_atoi_base(NULL, 10)); // no segmentation fault
}

void	test_ft_memjoin()
{
	/*
	** my ft_memjoin
	*/

	printf("\n>>>>> ft_memjoin <<<<<\n\n");
	printf("strcmp(ft_memjoin(\"\", \"\", 0, 0), \"\")) = %d\n", strcmp(ft_memjoin("", "", 0, 0), ""));
	printf("strcmp(ft_memjoin(NULL, NULL, 0, 0), \"\")) = %d\n", strcmp(ft_memjoin(NULL, NULL, 0, 0), ""));
	printf("strcmp(ft_memjoin(NULL, NULL, 1, 0), \"\")) = %d\n", strcmp(ft_memjoin(NULL, NULL, 1, 0), ""));
	printf("strcmp(ft_memjoin(NULL, NULL, 1, -1), \"\")) = %d\n", strcmp(ft_memjoin(NULL, NULL, 1, -1), ""));
	printf("strcmp(ft_memjoin(\"null\", NULL, 1, -1), \"n\")) = %d\n", strcmp(ft_memjoin("null", NULL, 1, -1), "n"));
}

void	test_ft_memswap()
{
	/*
	** my ft_memswap
	*/

	char	*str1;
	char	*str2;
	int		num1;
	int		num2;
	int		*arr_num1;
	int		*arr_num2;
	int		i;

	printf("\n>>>>> ft_memswap <<<<<\n\n");
	str1 = strdup("gjxtve");
	str2 = strdup("yt cgb");
	num1 = 21;
	num2 = 42;
	arr_num1 = (int *)malloc(3 * sizeof(int));
	arr_num2 = (int *)malloc(3 * sizeof(int));
	i = 0;
	while (i < 3)
	{
		arr_num1[i] = 2 * i;
		arr_num2[i] = 2 * i + 1;
		i++;
	}

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	printf("swap strings!\n");
	ft_memswap(str1, str2, strlen(str1));
	printf("str1 = %s\nstr2 = %s\n", str1, str2);

	printf("num1 = %d\nnum2 = %d\n", num1, num2);
	printf("swap ints!\n");
	ft_memswap((void *)&num1, (void *)&num2, sizeof(int));
	printf("num1 = %d\nnum2 = %d\n", num1, num2);

	i = 0;
	printf("int array 1 =");
	while (i < 3)
	{
		printf(" %d", arr_num1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("int array 2 =");
	while (i < 3)
	{
		printf(" %d", arr_num2[i]);
		i++;
	}
	printf("\n");
	printf("swap int arrays!\n");
	ft_memswap(arr_num1, arr_num2, sizeof(int) * 3);
	i = 0;
	printf("int array 1 =");
	while (i < 3)
	{
		printf(" %d", arr_num1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("int array 2 =");
	while (i < 3)
	{
		printf(" %d", arr_num2[i]);
		i++;
	}
	printf("\n");
}

void	test_ft_strpos()
{
	/*
	** my ft_strpos
	*/

	printf("\n>>>>> ft_strpos <<<<<\n\n");
	printf("ft_strpos(\"hello\", 'c') = %d\n", ft_strpos("hello", 'c'));
	printf("ft_strpos(\"hello_world\", 'o') = %d\n", ft_strpos("hello_world", 'o'));
	printf("ft_strpos(\"NULL\", 'N') = %d\n", ft_strpos("NULL", 'N'));
	printf("NULL %d\n", ft_strpos(NULL, 'c'));
}

void	test_ft_lstccldetect()
{
	/*
	** my ft_lstccldetect
	*/

	t_list	l1;
	t_list	l2;
	t_list	l3;
	t_list	l4;

	printf("\n>>>>> ft_lstccldetect <<<<<\n\n");
	l1.content = "first";
	l1.next = NULL;
	printf("l1 no cycle: %d\n", ft_lstccldetect(&l1));
	l1.next = &l1;
	printf("l1 have selfcycle: %d\n", ft_lstccldetect(&l1));
	l1.next = &l2;
	l2.next = NULL;
	printf("l1->l2 no cycle: %d\n", ft_lstccldetect(&l1));
	l2.next = &l1;
	printf("l1->l2->l1 have cycle: %d\n", ft_lstccldetect(&l1));
	l2.next = &l2;
	printf("l1->l2->l2 have cycle: %d\n", ft_lstccldetect(&l1));
	l2.next = &l3;
	l3.next = NULL;
	printf("l1->l2->l3 no cycle: %d\n", ft_lstccldetect(&l1));
	l3.next = &l3;
	printf("l1->l2->l3->l3 have cycle: %d\n", ft_lstccldetect(&l1));
	l3.next = &l2;
	printf("l1->l2->l3->l2 have cycle: %d\n", ft_lstccldetect(&l1));
	l3.next = &l1;
	printf("l1->l2->l3->l1 have cycle: %d\n", ft_lstccldetect(&l1));
	l3.next = &l4;
	l4.next = NULL;
	printf("l1->l2->l3->l4 no cycle: %d\n", ft_lstccldetect(&l1));
	l4.next = &l1;
	printf("l1->l2->l3->l1-> have cycle: %d\n", ft_lstccldetect(&l1));
	printf("\nft_lstccldetect OK\n");
}

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
