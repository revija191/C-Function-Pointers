/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:19:53 by rlohitha          #+#    #+#             */
/*   Updated: 2026/10/06 11:43:01 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int     ft_find_b(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (str[i] == 'b' || str[i] == 'B')
                        return (1);
                i++;
        }
        return (0);
}
*/
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab || !length || !f)
		return (0);
	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int     main(void)
{
        char    *str[] = {"pbf","t","cobx","dczb","se","foxh","qhlf","ucp","sk"};
 	int     (*f)(char*);

        f = ft_find_b;
        printf("%d\n", ft_count_if(str,9,f));
	return (0);
}
*/
