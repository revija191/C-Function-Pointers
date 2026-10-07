/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:48:31 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/05 18:59:02 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <stdio.h>
int	ft_multiply_5(int n)
{
	return (n * 5);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret_int;

	if (!tab || !length || !f)
		return (0);
	ret_int = malloc(sizeof(int) * length);
	if (!ret_int)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ret_int[i] = f(tab[i]);
		i++;
	}
	i = 0;
	return (ret_int);
}
/*
int main()
{
	int tab[] = {1,2,3,4,5,6};
	int length = 6;
	int (*p)(int) = ft_multiply_5;

	int *res = ft_map(tab, length, p);
	int i = 0;
	while (i < length)
	{
		printf("%d,", res[i]);
		i++;
	}
	return (0);
}
*/
