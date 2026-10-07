/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:32:12 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/05 16:57:04 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
			return (1);
		i++;
	}
	return (0);
}*/

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	if (!tab || !f)
		return (0);
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str[] = {"He1233", "String", "opple"};

	int	(*f)(char*);

	f = ft_find_a;
	printf("%d\n", ft_any(str, f));
	return (0);
}
*/
