/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:44:03 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/06 13:57:04 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_compare(int a, int b)
{
	return (a - b);
}
*/
void	ft_set_counter(int *is_asc, int *is_desc, int *is_zero, int res)
{
	if (res < 0)
		*is_asc = *is_asc + 1;
	else if (res > 0)
		*is_desc = *is_desc + 1;
	else
		*is_zero = *is_zero + 1;
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_asc;
	int	is_desc;
	int	res;
	int	is_zero;

	i = 1;
	is_asc = 0;
	is_desc = 0;
	is_zero = 0;
	if ((length < 2) || !tab)
		return (1);
	while (i < length)
	{
		res = f(tab[i - 1], tab[i]);
		ft_set_counter(&is_asc, &is_desc, &is_zero, res);
		i++;
	}
	if ((is_asc == (i - 1)) || (is_desc == (i - 1)) || (is_zero == (i - 1)))
		return (1);
	if ((is_asc + is_zero) == (i - 1) || (is_desc + is_zero) == (i - 1))
		return (1);
	return (0);
}
/*
int main(void)
{
	int tab[] = {71, 70,19, 17, 7, 7, 9};
	int length = 7;
	int (*p)(int, int) = ft_compare;
	printf("%d\n", ft_is_sort(tab, length, p));
	return(0);
}
*/
