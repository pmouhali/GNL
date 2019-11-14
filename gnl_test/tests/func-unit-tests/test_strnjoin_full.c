#include "get_next_line.h"
#include <string.h>
/* R = Random String | values = N */
int		main(void)
{
	char *s1;
	char *s2;
	char *got;

	ft_putstr_fd("R R -1 : ", 1);
	s1 = strdup("I like");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, "I like squirrels"))
	{
		ft_putstr_fd("expected I like squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("R R >STRLEN(s2) : ", 1);
	s1 = strdup("I like");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, "I like squirrels"))
	{
		ft_putstr_fd("expected I like squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("R R <STRLEN(s2) : ", 1);
	s1 = strdup("I like");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, "I like squirrel"))
	{
		ft_putstr_fd("expected I like squirrel got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("R R 0 : ", 1);
	s1 = strdup("I like");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, "I like"))
	{
		ft_putstr_fd("expected I like got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
	ft_putstr_fd("E R -1 : ", 1);
	s1 = strdup("");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, " squirrels"))
	{
		ft_putstr_fd("expected  squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E R >STRLEN(s2) : ", 1);
	s1 = strdup("");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, " squirrels"))
	{
		ft_putstr_fd("expected  squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E R <STRLEN(s2) : ", 1);
	s1 = strdup("");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, " squirrel"))
	{
		ft_putstr_fd("expected  squirrel got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E R 0 : ", 1);
	s1 = strdup("");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
	ft_putstr_fd("R E -1 : ", 1);
	s1 = strdup("I like");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, "I like"))
	{
		ft_putstr_fd("expected I like got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("R E >STRLEN(s2) : ", 1);
	s1 = strdup("I like");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, "I like"))
	{
		ft_putstr_fd("expected I like got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("R E <STRLEN(s2) : ", 1);
	s1 = strdup("I like");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, "I like"))
	{
		ft_putstr_fd("expected I like got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E R 0 : ", 1);
	s1 = strdup("I like");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, "I like"))
	{
		ft_putstr_fd("expected I like got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
	ft_putstr_fd("E E -1 : ", 1);
	s1 = strdup("");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E E >STRLEN(s2) : ", 1);
	s1 = strdup("");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E E <STRLEN(s2) : ", 1);
	s1 = strdup("");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("E E 0 : ", 1);
	s1 = strdup("");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
	ft_putstr_fd("NULL R -1 : ", 1);
	s1 = NULL;
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, " squirrels"))
	{
		ft_putstr_fd("expected  squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL R >STRLEN(s2) : ", 1);
	s1 = NULL;
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, " squirrels"))
	{
		ft_putstr_fd("expected  squirrels got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL R <STRLEN(s2) : ", 1);
	s1 = NULL;
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, " squirrel"))
	{
		ft_putstr_fd("expected  squirrel got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL R 0 : ", 1);
	s1 = strdup("");
	s2 = strdup(" squirrels");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
	ft_putstr_fd("NULL E -1 : ", 1);
	s1 = NULL;
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, -1);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL E >STRLEN(s2) : ", 1);
	s1 = NULL;
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 11);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL E <STRLEN(s2) : ", 1);
	s1 = NULL;
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 9);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);

	ft_putstr_fd("NULL E 0 : ", 1);
	s1 = strdup("");
	s2 = strdup("");
	got = ft_strnjoin(s1, s2, 0);
	if (strcmp(got, ""))
	{
		ft_putstr_fd("expected got ", 1);
		ft_putendl_fd(got, 1);
	}
	else
		ft_putendl_fd("OK", 1);
	free(s2);
	free(got);
/* ************************************************************************** */
}
